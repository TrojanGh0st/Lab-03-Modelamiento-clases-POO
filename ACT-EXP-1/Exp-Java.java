public class Usuario {
    private String nombre; // Nombre del usuario
    private String contrasena; // Contraseña del usuario

    // Constructor de la clase Usuario
    public Usuario(String nombre, String contrasena) {
        this.nombre = nombre; // Inicialización del nombre del usuario
        this.contrasena = contrasena; // Inicialización de la contraseña del usuario
    }

    // Método para iniciar sesión
    public void iniciarSesion() {
        System.out.println("Usuario " + nombre + " ha iniciado sesión"); // Mensaje de inicio de sesión
    }

    // Método para cambiar la contraseña del usuario
    public void cambiarContrasena(String nuevaContrasena) {
        this.contrasena = nuevaContrasena; // Actualización de la contraseña
    }
}

public class Tarea {
    private String titulo; // Título de la tarea
    private String descripcion; // Descripción de la tarea
    private String fechaLimite; // Fecha límite de la tarea

    // Constructor de la clase Tarea
    public Tarea(String titulo, String descripcion, String fechaLimite) {
        this.titulo = titulo; // Inicialización del título de la tarea
        this.descripcion = descripcion; // Inicialización de la descripción de la tarea
        this.fechaLimite = fechaLimite; // Inicialización de la fecha límite de la tarea
    }

    // Método para mostrar la información de la tarea
    public void mostrarInformacion() {
        System.out.println("**Tarea:** " + titulo); // Mostrar el título de la tarea
        System.out.println("**Descripción:** " + descripcion); // Mostrar la descripción de la tarea
        System.out.println("**Fecha Límite:** " + fechaLimite); // Mostrar la fecha límite de la tarea
    }
}

public class Main {
    public static void main(String[] args) {
        // Crear un usuario
        Usuario usuario = new Usuario("usuario123", "contrasena123");

        // Iniciar sesión del usuario
        usuario.iniciarSesion();

        // Cambiar la contraseña del usuario
        usuario.cambiarContrasena("nuevaContrasena456");

        // Crear una tarea
        Tarea tarea = new Tarea("Hacer la presentación", "Preparar la presentación para el equipo", "2024-04-30");

        // Mostrar información de la tarea
        tarea.mostrarInformacion();
    }
}
