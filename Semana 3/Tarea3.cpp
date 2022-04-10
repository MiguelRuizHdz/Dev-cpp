/*Tarea 3 Realice un programa en C++, de tal manera que se construya una
soluci�n para para tener los datos de una persona que trabaja y estudia*/
#include<iostream>
using namespace std;

class Persona {
    private: 
        string nombre;
        int edad;
    public: // Metodos
        Persona (string, int); // constructor
        void mostrarDatosPersonales();
};

class Estudiante : public Persona {
    private:
        string nombreEscuela, carrera;
    public: // Metodos
        Estudiante (string, int, string, string); // constructor clase Estudiante
        void mostrarEstudios();
};

class Empleado : public Estudiante {
    private:
        string puesto;
    public: // Metodos
        Empleado (string, int, string, string, string ); // constructor clase Empleado
        void mostrarPuesto(); // metodo
};

// Constructor de la Clase Persona(clase Padre)
Persona::Persona(string _nombre, int _edad){
    cout << "Cual es tu nombre: " << endl;
    cin>> nombre;
    cout << "Cual es tu edad: " << endl;
    cin>> edad;
    // nombre = _nombre;
    // edad = _edad;
};
// Constructor de la Clase Estudiante con Herencia de Persona
Estudiante::Estudiante(string _nombre, int _edad, string _nombreEscuela, string _carrera) : Persona(_nombre, _edad) {
    cout << "Donde Estudias: " << endl;
    cin>> nombreEscuela;
    cout << "Cual es tu carrera: " << endl;
    cin >> carrera;
    // nombreEscuela = _nombreEscuela;
    // carrera = _carrera;
};

// Constructor de la Clase Empleado con Herencia de Estudiante
Empleado::Empleado(string _nombre, int _edad, string _nombreEscuela, string _carrera, string _puesto) : Estudiante(_nombre, _edad, _nombreEscuela, _carrera) {
    cout << "Cual es el nombre del Puesto de trabajo: " << endl;
    cin >> puesto;
    // puesto = _puesto;
};

void Persona :: mostrarDatosPersonales() {
    cout<<"\nNombre: " << nombre << endl;
    cout<<"Edad: " << edad << endl;
}
void Estudiante :: mostrarEstudios() {
    cout<<"Escuela: " << nombreEscuela << endl;
    cout<<"Carrera: " << carrera << endl;
}
void Empleado :: mostrarPuesto() {
    cout<<"Puesto: " << puesto << endl;
}

main() {
    string nombre, nombreEscuela, carrera, puesto;
    int edad;
    Empleado personaEstudiaTrabaja(nombre, edad, nombreEscuela, carrera, puesto);
    personaEstudiaTrabaja.mostrarDatosPersonales();
    personaEstudiaTrabaja.mostrarEstudios();
    personaEstudiaTrabaja.mostrarPuesto();
    return 0;
}



















