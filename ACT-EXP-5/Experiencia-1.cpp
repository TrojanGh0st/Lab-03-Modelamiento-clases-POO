#include <iostream>

using namespace std;

// Interfaz para el dispositivo de almacenamiento
class IAlmacenamiento {
public:
    virtual void GuardarDatos(const string& datos) = 0; // Método virtual puro para guardar datos
};

// Clase concreta que implementa el almacenamiento en disco
class AlmacenamientoEnDisco : public IAlmacenamiento {
public:
    void GuardarDatos(const string& datos) override {
        cout << "Guardando datos en disco: " << datos << endl;
        // Lógica para guardar datos en disco
    }
};

// Clase concreta que implementa el almacenamiento en la nube
class AlmacenamientoEnNube : public IAlmacenamiento {
public:
    void GuardarDatos(const string& datos) override {
        cout << "Guardando datos en la nube: " << datos << endl;
        // Lógica para guardar datos en la nube
    }
};

// Clase de alto nivel que depende de la abstracción IAlmacenamiento
class ProcesadorDatos {
public:
    ProcesadorDatos(IAlmacenamiento* almacenamiento) : almacenamiento(almacenamiento) {}

    void ProcesarYGuardarDatos(const string& datos) {
        // Lógica para procesar los datos
        almacenamiento->GuardarDatos(datos); // Utiliza la abstracción para guardar los datos
    }

private:
    IAlmacenamiento* almacenamiento; // Referencia a la abstracción del almacenamiento
};

int main() {
    // Crear instancias de almacenamiento
    AlmacenamientoEnDisco almacenamientoDisco;
    AlmacenamientoEnNube almacenamientoNube;

    // Crear un procesador de datos que utiliza almacenamiento en disco
    ProcesadorDatos procesadorDisco(&almacenamientoDisco);
    procesadorDisco.ProcesarYGuardarDatos("Datos importantes guardados en disco");

    // Crear un procesador de datos que utiliza almacenamiento en la nube
    ProcesadorDatos procesadorNube(&almacenamientoNube);
    procesadorNube.ProcesarYGuardarDatos("Datos críticos guardados en la nube");

    return 0;
}
