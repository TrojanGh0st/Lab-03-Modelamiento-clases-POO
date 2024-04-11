# Clase que representa una fecha límite para una tarea
class FechaLimite:
    def __init__(self, dia, mes, anio):
        self.dia = dia  # Inicialización del día
        self.mes = mes  # Inicialización del mes
        self.anio = anio  # Inicialización del año

    # Método para verificar si la fecha límite es válida
    def es_valida(self):
        # Validación de la fecha (aquí se puede agregar lógica de validación adicional)
        return True

    # Método para mostrar la información de la fecha límite
    def mostrar_informacion(self):
        print("**Fecha límite:** {}/{}/{}".format(self.dia, self.mes, self.anio))  # Mostrar la fecha límite


# Clase que representa una tarea en la aplicación
class Tarea:
    def __init__(self, titulo, descripcion, fecha_limite):
        self.titulo = titulo  # Inicialización del título de la tarea
        self.descripcion = descripcion  # Inicialización de la descripción de la tarea
        self.fecha_limite = fecha_limite  # Inicialización de la fecha límite de la tarea

    # Método para mostrar la información de la tarea
    def mostrar_informacion(self):
        print("**Tarea:**", self.titulo)  # Mostrar el título de la tarea
        print("**Descripción:**", self.descripcion)  # Mostrar la descripción de la tarea
        self.fecha_limite.mostrar_informacion()  # Mostrar la fecha límite de la tarea


# Clase que representa una tarea prioritaria, que hereda de la clase Tarea
class TareaPrioritaria(Tarea):
    def __init__(self, titulo, descripcion, fecha_limite, prioridad):
        super().__init__(titulo, descripcion, fecha_limite)
        self.prioridad = prioridad  # Inicialización de la prioridad de la tarea prioritaria

    # Método para mostrar la información de la tarea prioritaria, sobrescribiendo el método de la clase base
    def mostrar_informacion(self):
        super().mostrar_informacion()  # Llamada al método de la clase base para mostrar la información básica de la tarea
        print("**Prioridad:**", self.prioridad)  # Mostrar la prioridad de la tarea prioritaria


# Crear una fecha límite para una tarea
fecha_limite = FechaLimite(30, 4, 2024)
fecha_limite.mostrar_informacion()  # Mostrar información de la fecha límite

# Crear una tarea prioritaria
tarea = TareaPrioritaria("Hacer la presentación",
                         "Preparar la presentación para el equipo",
                         fecha_limite,
                         1)

tarea.mostrar_informacion()  # Mostrar información de la tarea prioritaria
