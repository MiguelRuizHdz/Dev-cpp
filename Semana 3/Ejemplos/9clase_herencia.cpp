#include<iostream>
using namespace std;
class Persona {
    private: // Atributos // protected si lo agregamos la clase herencia alumno puede manipular la clase padre
        string nombre;
        int edad;
    public: // Metodos
        Persona (string, int); // constructor
        void mostrarPersona();
};

class Alumno : public Persona {
    private:
        string codigoAlumno;
        float notaFinal;
    public: // Metodos
        Alumno (string, int, string, float); // constructor clase alumno
        void mostrarAlumno();
};
class Carrera : public Alumno {
    private:
        string nombre_carrera;
        int clave;
    public: // Metodos
        Carrera (string, int, string, float, string, int); // constructor clase carrera
        void mostrarCarrera(); // metodo
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
// Constructor de la Clase Alumno con Herencia de Persona
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre, _edad) {
    cout << "Cual es tu codigo: " << endl;
    cin>> codigoAlumno;
    cout << "Cual es tu Nota Final: " << endl;
    cin>> notaFinal;
    // codigoAlumno = _codigoAlumno;
    // notaFinal = _notaFinal;
};
// Constructor de la Clase Carrera con Herencia de Alumnno
Carrera::Carrera(string _nombre, int _edad, string _codigoAlumno, float _notaFinal, string _nombre_carrera, int _clave) : Alumno(_nombre, _edad, _codigoAlumno, _notaFinal) {
    cout << "Cual es el Nombre de tu carrera: " << endl;
    cin>> nombre_carrera;
    cout << "Cual es la clave: " << endl;
    cin>> clave;
    // nombre_carrera = _nombre_carrera;
    // clave = _clave;
};

void Persona :: mostrarPersona() {
    cout<<"El nombre es: " << nombre << endl;
    cout<<"Edad: " << edad << endl;
}
void Alumno :: mostrarAlumno() {
    mostrarPersona();
    cout<<"El codigo del alumno es: " << codigoAlumno << endl;
    cout<<"La nota final es: " << notaFinal << endl;
}
void Carrera :: mostrarCarrera() {
    mostrarAlumno();
    cout<<"Nombre de la Carrera: " << nombre_carrera << endl;
    cout<<"Clave: " << clave << endl;
}

main() {
    string nombre, codigoAlumno, nombre_carrera;
    int clave, edad;
    float notaFinal;
    // Carrera alumno1("Miguel", 21, 1235, 100, IAS, 401);
    Carrera alumno1(nombre, edad, codigoAlumno, notaFinal, nombre_carrera, clave);
    Carrera alumno2(nombre, edad, codigoAlumno, notaFinal, nombre_carrera, clave);
    alumno1.mostrarCarrera();
    alumno2.mostrarAlumno();
    return 0;
}

