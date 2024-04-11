#include <iostream>
#include <string>

using namespace std;

// Clase que representa a un usuario de la aplicación
class Usuario {
public:
  // Constructor de la clase Usuario
  Usuario(const string& nombre, const string& contrasena) {
    this->nombre = nombre; // Inicialización del nombre del usuario
    this->contrasena = contrasena; // Inicialización de la contraseña del usuario
  }

  // Método para iniciar sesión
  void IniciarSesion() {
    cout << "Usuario " << nombre << " ha iniciado sesión" << endl; // Mensaje de inicio de sesión
  }

  // Método para cambiar la contraseña del usuario
  void CambiarContrasena(const string& nuevaContrasena) {
    this->contrasena = nuevaContrasena; // Actualización de la contraseña
  }

private:
  string nombre; // Nombre del usuario
  string contrasena; // Contraseña del usuario
};

// Clase que representa una tarea en la aplicación
class Tarea {
public:
  // Constructor de la clase Tarea
  Tarea(const string& titulo, const string& descripcion, 
        const string& fechaLimite) {
    this->titulo = titulo; // Inicialización del título de la tarea
    this->descripcion = descripcion; // Inicialización de la descripción de la tarea
    this->fechaLimite = fechaLimite; // Inicialización de la fecha límite de la tarea
  }

  // Método para mostrar la información de la tarea
  void MostrarInformacion() {
    cout << "**Tarea:** " << titulo << endl; // Mostrar el título de la tarea
    cout << "**Descripción:** " << descripcion << endl; // Mostrar la descripción de la tarea
    cout << "**Fecha Límite:** " << fechaLimite << endl; // Mostrar la fecha límite de la tarea
  }

private:
  string titulo; // Título de la tarea
  string descripcion; // Descripción de la tarea
  string fechaLimite; // Fecha límite de la tarea
};

int main() {
    // Crear un usuario
    Usuario usuario("usuario123", "contrasena123");

    // Iniciar sesión del usuario
    usuario.IniciarSesion();

    // Cambiar la contraseña del usuario
    usuario.CambiarContrasena("nuevaContrasena456");

    // Crear una tarea
    Tarea tarea("Hacer la presentación", "Preparar la presentación para el equipo", "2024-04-30");

    // Mostrar información de la tarea
    tarea.MostrarInformacion();

    return 0;
}
