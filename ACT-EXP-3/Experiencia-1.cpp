#include <iostream>
#include <ctime>

using namespace std;

// Clase que representa una fecha límite para una tarea
class FechaLimite {
public:
  // Constructor de la clase FechaLimite
  FechaLimite(const int dia, const int mes, const int anio) {
    this->dia = dia; // Inicialización del día
    this->mes = mes; // Inicialización del mes
    this->anio = anio; // Inicialización del año
  }

  // Método para verificar si la fecha límite es válida
  bool EsValida() {
    // Validación de la fecha (aquí se puede agregar lógica de validación adicional)
    return true;
  }

  // Método para mostrar la información de la fecha límite
  void MostrarInformacion() {
    cout << "**Fecha límite:** " << dia << "/" << mes << "/" << anio << endl; // Mostrar la fecha límite
  }

private:
  int dia; // Día de la fecha límite
  int mes; // Mes de la fecha límite
  int anio; // Año de la fecha límite
};

// Interfaz para validar una fecha límite
class IValidadorFechaLimite {
public:
  virtual bool EsValida(const FechaLimite& fechaLimite) = 0; // Método virtual puro para validar una fecha límite
};

// Implementación concreta de la interfaz de validación de fecha límite
class ValidadorFechaLimiteSimple : public IValidadorFechaLimite {
public:
  // Método para verificar si una fecha límite es válida (implementación específica)
  bool EsValida(const FechaLimite& fechaLimite) override {
    // Validación simple de la fecha límite (aquí se puede agregar lógica de validación específica)
    return true;
  }
};

// Clase que representa una tarea en la aplicación
class Tarea {
public:
  // Constructor de la clase Tarea
  Tarea(const string& titulo, const string& descripcion, 
        const FechaLimite& fechaLimite) : fechaLimite(fechaLimite) {
    this->titulo = titulo; // Inicialización del título de la tarea
    this->descripcion = descripcion; // Inicialización de la descripción de la tarea
  }

  // Método para mostrar la información de la tarea
  virtual void MostrarInformacion() {
    cout << "**Tarea:** " << titulo << endl; // Mostrar el título de la tarea
    cout << "**Descripción:** " << descripcion << endl; // Mostrar la descripción de la tarea
    fechaLimite.MostrarInformacion(); // Mostrar la fecha límite de la tarea
  }

private:
  string titulo; // Título de la tarea
  string descripcion; // Descripción de la tarea
  FechaLimite fechaLimite; // Fecha límite de la tarea
};

// Clase que representa una tarea prioritaria, que hereda de la clase Tarea
class TareaPrioritaria : public Tarea {
public:
  // Constructor de la clase TareaPrioritaria
  TareaPrioritaria(const string& titulo, 
                   const string& descripcion, 
                   const FechaLimite& fechaLimite, 
                   const int prioridad) : 
    Tarea(titulo, descripcion, fechaLimite) {
    this->prioridad = prioridad; // Inicialización de la prioridad de la tarea prioritaria
  }

  // Método para mostrar la información de la tarea prioritaria, sobrescribiendo el método de la clase base
  void MostrarInformacion() override {
    Tarea::MostrarInformacion(); // Llamada al método de la clase base para mostrar la información básica de la tarea
    cout << "**Prioridad:** " << prioridad << endl; // Mostrar la prioridad de la tarea prioritaria
  }

private:
  int prioridad; // Prioridad de la tarea prioritaria
};

int main() {
    // Crear una fecha límite para una tarea
    FechaLimite fechaLimite(30, 4, 2024);
    fechaLimite.MostrarInformacion(); // Mostrar información de la fecha límite

    // Crear una tarea prioritaria
    TareaPrioritaria tarea("Hacer la presentación", 
                           "Preparar la presentación para el equipo", 
                           fechaLimite, 
                           1);
    
    tarea.MostrarInformacion(); // Mostrar información de la tarea prioritaria

    return 0;
}
