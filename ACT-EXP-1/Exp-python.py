class Usuario:
    # Constructor de la clase Usuario
    def __init__(self, nombre, contrasena):
        self.nombre = nombre  # Inicialización del nombre del usuario
        self.contrasena = contrasena  # Inicialización de la contraseña del usuario

    # Método para iniciar sesión
    def iniciar_sesion(self):
        print("Usuario", self.nombre, "ha iniciado sesión")  # Mensaje de inicio de sesión

    # Método para cambiar la contraseña del usuario
    def cambiar_contrasena(self, nueva_contrasena):
        self.contrasena = nueva_contrasena  # Actualización de la contraseña

class Tarea:
    # Constructor de la clase Tarea
    def __init__(self, titulo, descripcion, fecha_limite):
        self.titulo = titulo  # Inicialización del título de la tarea
        self.descripcion = descripcion  # Inicialización de la descripción de la tarea
        self.fecha_limite = fecha_limite  # Inicialización de la fecha límite de la tarea

    # Método para mostrar la información de la tarea
    def mostrar_informacion(self):
        print("**Tarea:**", self.titulo)  # Mostrar el título de la tarea
        print("**Descripción:**", self.descripcion)  # Mostrar la descripción de la tarea
        print("**Fecha Límite:**", self.fecha_limite)  # Mostrar la fecha límite de la tarea

# Crear un usuario
usuario = Usuario("usuario123", "contrasena123")

# Iniciar sesión del usuario
usuario.iniciar_sesion()

# Cambiar la contraseña del usuario
usuario.cambiar_contrasena("nuevaContrasena456")

# Crear una tarea
tarea = Tarea("Hacer la presentación", "Preparar la presentación para el equipo", "2024-04-30")

# Mostrar información de la tarea
tarea.mostrar_informacion()
