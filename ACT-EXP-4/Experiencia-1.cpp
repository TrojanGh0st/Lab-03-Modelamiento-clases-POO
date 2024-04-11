#include <iostream>

using namespace std;

// Interfaz para una figura geométrica básica
class IFiguraBasica {
public:
    virtual void MostrarInformacionBasica() = 0; // Método virtual puro para mostrar información básica de la figura
};

// Interfaz para una figura geométrica extendida
class IFiguraExtendida {
public:
    virtual double CalcularArea() = 0; // Método virtual puro para calcular el área de la figura
};

// Clase que representa un rectángulo básico
class RectanguloBasico : public IFiguraBasica {
public:
    // Método para mostrar información básica del rectángulo básico
    void MostrarInformacionBasica() override {
        cout << "Rectángulo Básico" << endl;
    }
};

// Clase que representa un rectángulo extendido
class RectanguloExtendido : public IFiguraBasica, public IFiguraExtendida {
public:
    // Constructor de la clase RectanguloExtendido
    RectanguloExtendido(double ancho, double alto) : ancho(ancho), alto(alto) {}

    // Método para mostrar información básica del rectángulo extendido
    void MostrarInformacionBasica() override {
        cout << "Rectángulo Extendido" << endl;
    }

    // Método para calcular el área del rectángulo extendido
    double CalcularArea() override {
        return ancho * alto;
    }

private:
    double ancho; // Ancho del rectángulo extendido
    double alto; // Alto del rectángulo extendido
};

// Clase que representa un círculo básico
class CirculoBasico : public IFiguraBasica {
public:
    // Método para mostrar información básica del círculo básico
    void MostrarInformacionBasica() override {
        cout << "Círculo Básico" << endl;
    }
};

// Clase que representa un círculo extendido
class CirculoExtendido : public IFiguraBasica, public IFiguraExtendida {
public:
    // Constructor de la clase CirculoExtendido
    CirculoExtendido(double radio) : radio(radio) {}

    // Método para mostrar información básica del círculo extendido
    void MostrarInformacionBasica() override {
        cout << "Círculo Extendido" << endl;
    }

    // Método para calcular el área del círculo extendido
    double CalcularArea() override {
        return 3.14159 * radio * radio;
    }

private:
    double radio; // Radio del círculo extendido
};

int main() {
    // Crear y mostrar información de figuras básicas
    RectanguloBasico rectanguloBasico;
    CirculoBasico circuloBasico;

    cout << "Información de Figuras Básicas:" << endl;
    rectanguloBasico.MostrarInformacionBasica();
    circuloBasico.MostrarInformacionBasica();

    // Crear y mostrar información de figuras extendidas
    RectanguloExtendido rectanguloExtendido(5.0, 3.0);
    CirculoExtendido circuloExtendido(2.5);

    cout << "\nInformación de Figuras Extendidas:" << endl;
    rectanguloExtendido.MostrarInformacionBasica();
    cout << "Área del rectángulo extendido: " << rectanguloExtendido.CalcularArea() << endl;
    circuloExtendido.MostrarInformacionBasica();
    cout << "Área del círculo extendido: " << circuloExtendido.CalcularArea() << endl;

    return 0;
}
