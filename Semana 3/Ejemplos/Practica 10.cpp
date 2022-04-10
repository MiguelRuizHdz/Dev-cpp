/*Práctica 10: Realice un programa en C++, de tal manera que se construya
una solución para la jerarquía(herencia) de clases de una persona, que indique sus datos(Persona), puesto de trabajo(Gerente), profesion
(Arquitecto)*/
#include<iostream>
using namespace std;

class Persona {
    private: // Atributos // protected si lo agregamos la clase herencia puesto puede manipular la clase padre
        string nombre;
        int edad;
    public: // Metodos
        Persona (string, int); // constructor
        void mostrarPersona();
};

class Puesto : public Persona {
    private:
        string nombrePuesto;
        float sueldo;
    public: // Metodos
        Puesto (string, int, string, float); // constructor clase Puesto
        void mostrarPuesto();
};

class Profesion : public Puesto {
    private:
        string nombre_Profesion;
        int clave;
    public: // Metodos
        Profesion (string, int, string, float, string, int); // constructor clase Profesion
        void mostrarProfesion(); // metodo
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
// Constructor de la Clase Puesto con Herencia de Persona
Puesto::Puesto(string _nombre, int _edad, string _nombrePuesto, float _sueldo) : Persona(_nombre, _edad) {
    cout << "Cual es tu puesto: " << endl;
    cin>> nombrePuesto;
    cout << "Cual es tu sueldo: " << endl;
    cin>> sueldo;
    // nombrePuesto = _nombrePuesto;
    // sueldo = _sueldo;
};

// Constructor de la Clase Profesion con Herencia de Puesto
Profesion::Profesion(string _nombre, int _edad, string _nombrePuesto, float _sueldo, string _nombre_Profesion, int _clave) : Puesto(_nombre, _edad, _nombrePuesto, _sueldo) {
    cout << "Cual es el nombre de tu Profesion: " << endl;
    cin>> nombre_Profesion;
    cout << "Cual es la clave de la profesion: " << endl;
    cin>> clave;
    // nombre_Profesion = _nombre_Profesion;
    // clave = _clave;
};

void Persona :: mostrarPersona() {
    cout<<"Nombre: " << nombre << endl;
    cout<<"Edad: " << edad << endl;
}
void Puesto :: mostrarPuesto() {
    mostrarPersona();
    cout<<"Puesto: " << nombrePuesto << endl;
    cout<<"Sueldo: " << sueldo << endl;
}
void Profesion :: mostrarProfesion() {
    mostrarPuesto();
    cout<<"Nombre de la Profesion: " << nombre_Profesion << endl;
    cout<<"Clave: " << clave << endl;
}

main() {
    string nombre, nombrePuesto, nombre_Profesion;
    int clave, edad;
    float sueldo;
    // Profesion persona1("Miguel", 21, "Desarrollador de Software", 10000, "Ing. Administrador de Sistemas", 401);
    Profesion persona1(nombre, edad, nombrePuesto, sueldo, nombre_Profesion, clave);
    persona1.mostrarProfesion();
    return 0;
}
