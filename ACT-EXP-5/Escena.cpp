#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

// Función para ingresar usuario y contraseña
void ingresarCredenciales(string& usuario, string& contrasena) {
    cout << "Ingrese su usuario: ";
    cin >> usuario;
    
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;
}

class Tarea {
public:
    Tarea(const string& nombre, const string& descripcion, const tm& fechaLimite)
        : nombre(nombre), descripcion(descripcion), fechaLimite(fechaLimite), completada(false) {}

    void marcarComoCompletada() {
        completada = true;
    }

    bool estaCompletada() const {
        return completada;
    }

    const string& obtenerNombre() const {
        return nombre;
    }

    const string& obtenerDescripcion() const {
        return descripcion;
    }

    const tm& obtenerFechaLimite() const {
        return fechaLimite;
    }

private:
    string nombre;
    string descripcion;
    tm fechaLimite; // Fecha límite
    bool completada;
};

class GestorTareas {
public:
    void agregarTarea(const Tarea& tarea) {
        tareas.push_back(tarea);
    }

    void marcarTareaComoCompletada(const string& nombreTarea) {
        for (auto& tarea : tareas) {
            if (tarea.obtenerNombre() == nombreTarea) {
                tarea.marcarComoCompletada();
                return;
            }
        }
        cout << "No encontré tu tarea" << endl;
    }

    void mostrarTareasIncompletas() const {
        cout << "\tTareas SIN terminar" << endl;
        for (const auto& tarea : tareas) {
            if (!tarea.estaCompletada()) {
                cout << "Nombre: " << tarea.obtenerNombre() << "\nDescripcion: " << tarea.obtenerDescripcion() << endl;
            }
        }
    }

private:
    vector<Tarea> tareas;
};

int main() {
    GestorTareas gestorTareas;

    // Creando tareas
    tm fechaLimite1 = {}; // Inicializar a cero
    fechaLimite1.tm_year = 124; // Año - 1900
    fechaLimite1.tm_mon = 3; // Mes (0 - 11)
    fechaLimite1.tm_mday = 15; // Día del mes (1 - 31)
    Tarea tarea1("Tarea 1", "Completar tarea 1", fechaLimite1);

    tm fechaLimite2 = {};
    fechaLimite2.tm_year = 124;
    fechaLimite2.tm_mon = 4;
    fechaLimite2.tm_mday = 30;
    Tarea tarea2("Tarea 2", "Completar tarea 2", fechaLimite2);

    // Agregando tareas al gestor de tareas
    gestorTareas.agregarTarea(tarea1);
    gestorTareas.agregarTarea(tarea2);

    // Mostrando tareas incompletas
    gestorTareas.mostrarTareasIncompletas();

    // Marcando una tarea como completada
    gestorTareas.marcarTareaComoCompletada("Tarea 1");

    // Mostrando tareas incompletas después de la completitud
    gestorTareas.mostrarTareasIncompletas();

    return 0;
}
