// Interfaz para una figura geométrica básica
interface IFiguraBasica {
    void mostrarInformacionBasica(); // Método virtual puro para mostrar información básica de la figura
}

// Interfaz para una figura geométrica extendida
interface IFiguraExtendida {
    double calcularArea(); // Método virtual puro para calcular el área de la figura
}

// Clase que representa un rectángulo básico
class RectanguloBasico implements IFiguraBasica {
    public void mostrarInformacionBasica() {
        System.out.println("Rectángulo Básico");
    }
}

// Clase que representa un rectángulo extendido
class RectanguloExtendido implements IFiguraBasica, IFiguraExtendida {
    private double ancho;
    private double alto;

    public RectanguloExtendido(double ancho, double alto) {
        this.ancho = ancho;
        this.alto = alto;
    }

    public void mostrarInformacionBasica() {
        System.out.println("Rectángulo Extendido");
    }

    public double calcularArea() {
        return ancho * alto;
    }
}

// Clase que representa un círculo básico
class CirculoBasico implements IFiguraBasica {
    public void mostrarInformacionBasica() {
        System.out.println("Círculo Básico");
    }
}

// Clase que representa un círculo extendido
class CirculoExtendido implements IFiguraBasica, IFiguraExtendida {
    private double radio;

    public CirculoExtendido(double radio) {
        this.radio = radio;
    }

    public void mostrarInformacionBasica() {
        System.out.println("Círculo Extendido");
    }

    public double calcularArea() {
        return 3.14159 * radio * radio;
    }
}

public class Main {
    public static void main(String[] args) {
        // Crear y mostrar información de figuras básicas
        RectanguloBasico rectanguloBasico = new RectanguloBasico();
        CirculoBasico circuloBasico = new CirculoBasico();

        System.out.println("Información de Figuras Básicas:");
        rectanguloBasico.mostrarInformacionBasica();
        circuloBasico.mostrarInformacionBasica();

        // Crear y mostrar información de figuras extendidas
        RectanguloExtendido rectanguloExtendido = new RectanguloExtendido(5.0, 3.0);
        CirculoExtendido circuloExtendido = new CirculoExtendido(2.5);

        System.out.println("\nInformación de Figuras Extendidas:");
        rectanguloExtendido.mostrarInformacionBasica();
        System.out.println("Área del rectángulo extendido: " + rectanguloExtendido.calcularArea());
        circuloExtendido.mostrarInformacionBasica();
        System.out.println("Área del círculo extendido: " + circuloExtendido.calcularArea());
    }
}
