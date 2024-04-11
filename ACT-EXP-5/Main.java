// Interfaz para el dispositivo de almacenamiento
interface IAlmacenamiento {
    void guardarDatos(String datos); // Método virtual puro para guardar datos
}

// Clase concreta que implementa el almacenamiento en disco
class AlmacenamientoEnDisco implements IAlmacenamiento {
    public void guardarDatos(String datos) {
        System.out.println("Guardando datos en disco: " + datos);
        // Lógica para guardar datos en disco
    }
}

// Clase concreta que implementa el almacenamiento en la nube
class AlmacenamientoEnNube implements IAlmacenamiento {
    public void guardarDatos(String datos) {
        System.out.println("Guardando datos en la nube: " + datos);
        // Lógica para guardar datos en la nube
    }
}

// Clase de alto nivel que depende de la abstracción IAlmacenamiento
class ProcesadorDatos {
    private IAlmacenamiento almacenamiento; // Referencia a la abstracción del almacenamiento

    public ProcesadorDatos(IAlmacenamiento almacenamiento) {
        this.almacenamiento = almacenamiento;
    }

    public void procesarYGuardarDatos(String datos) {
        // Lógica para procesar los datos
        almacenamiento.guardarDatos(datos); // Utiliza la abstracción para guardar los datos
    }
}

public class Main {
    public static void main(String[] args) {
        // Crear instancias de almacenamiento
        AlmacenamientoEnDisco almacenamientoDisco = new AlmacenamientoEnDisco();
        AlmacenamientoEnNube almacenamientoNube = new AlmacenamientoEnNube();

        // Crear un procesador de datos que utiliza almacenamiento en disco
        ProcesadorDatos procesadorDisco = new ProcesadorDatos(almacenamientoDisco);
        procesadorDisco.procesarYGuardarDatos("Datos importantes guardados en disco");

        // Crear un procesador de datos que utiliza almacenamiento en la nube
        ProcesadorDatos procesadorNube = new ProcesadorDatos(almacenamientoNube);
        procesadorNube.procesarYGuardarDatos("Datos críticos guardados en la nube");
    }
}
