// Clase que representa una fecha límite para una tarea
class FechaLimite {
    private int dia;  // Día de la fecha límite
    private int mes;  // Mes de la fecha límite
    private int anio;  // Año de la fecha límite

    // Constructor de la clase FechaLimite
    public FechaLimite(int dia, int mes, int anio) {
        this.dia = dia;  // Inicialización del día
        this.mes = mes;  // Inicialización del mes
        this.anio = anio;  // Inicialización del año
    }

    // Método para verificar si la fecha límite es válida
    public boolean esValida() {
        // Validación de la fecha (aquí se puede agregar lógica de validación adicional)
        return true;
    }

    // Método para mostrar la información de la fecha límite
    public void mostrarInformacion() {
        System.out.println("**Fecha límite:** " + dia + "/" + mes + "/" + anio);
    }
}

// Clase que representa una tarea en la aplicación
class Tarea {
    private String titulo;  // Título de la tarea
    private String descripcion;  // Descripción de la tarea
    private FechaLimite fechaLimite;  // Fecha límite de la tarea

    // Constructor de la clase Tarea
    public Tarea(String titulo, String descripcion, FechaLimite fechaLimite) {
        this.titulo = titulo;  // Inicialización del título de la tarea
        this.descripcion = descripcion;  // Inicialización de la descripción de la tarea
        this.fechaLimite = fechaLimite;  // Inicialización de la fecha límite de la tarea
    }

    // Método para mostrar la información de la tarea
    public void mostrarInformacion() {
        System.out.println("**Tarea:** " + titulo);  // Mostrar el título de la tarea
        System.out.println("**Descripción:** " + descripcion);  // Mostrar la descripción de la tarea
        fechaLimite.mostrarInformacion();  // Mostrar la fecha límite de la tarea
    }
}

// Clase que representa una tarea prioritaria en la aplicación
class TareaPrioritaria extends Tarea {
    private int prioridad;  // Prioridad de la tarea prioritaria

    // Constructor de la clase TareaPrioritaria
    public TareaPrioritaria(String titulo, String descripcion, FechaLimite fechaLimite, int prioridad) {
        super(titulo, descripcion, fechaLimite);  // Llamar al constructor de la clase base
        this.prioridad = prioridad;  // Inicialización de la prioridad de la tarea prioritaria
    }

    // Método para mostrar la información de la tarea prioritaria
    public void mostrarInformacion() {
        super.mostrarInformacion();  // Llamar al método de la clase base para mostrar la información básica
        System.out.println("**Prioridad:** " + prioridad);  // Mostrar la prioridad de la tarea prioritaria
    }
}

public class Main {
    public static void main(String[] args) {
        // Crear una fecha límite para una tarea
        FechaLimite fechaLimite = new FechaLimite(30, 4, 2024);
        fechaLimite.mostrarInformacion();  // Mostrar información de la fecha límite

        // Crear una tarea prioritaria
        TareaPrioritaria tarea = new TareaPrioritaria("Hacer la presentación",
                "Preparar la presentación para el equipo", fechaLimite, 1);

        tarea.mostrarInformacion();  // Mostrar información de la tarea prioritaria
    }
}
