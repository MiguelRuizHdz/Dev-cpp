// Atributo - Variable
// Mï¿½todo - es una acciï¿½n
#include<iostream>
using namespace std;
class Persona { // nombre de la clase
	private: // ATRIBUTOS son caracteristï¿½cas de la persona (estos no pueden modificarse solo pueden modificar los metodos
		int edad; 
		string nombre;
		string apellido;
		float estatura;
	public: // Metodos son las acciones de la persona
		Persona(int, string, string, float); // contructor de la clase
		void leer(); // metodo
		void aprender(); // metodo
};

// Contructor sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre, string _apellido, float _estatura) {
//	cout<<"Dame la edad: ";
//	cin>>edad;
//	cout<<"Dame el nombre: ";
//	cin>>nombre;
//	cout<<"Dame el apellido: ";
//	cin>>apellido;
//	cout<<"Dame tu estatura: ";
//	cin>>estatura;
	// Se asinga el valor a cada variable y no se le pde al usuario datos
	edad= _edad; //asigno valor
	nombre = _nombre;
	apellido = _apellido;
	apellido = _apellido;
	estatura = _estatura;
}

void Persona::leer(){
	cout<<"Soy "<< nombre << " " << apellido << " y estoy leyendo C++"<<endl;
}
void Persona::aprender(){
	cout<<"Soy "<< nombre << " y estoy aprendiendo C++ y tengo " << edad <<endl;
}

int main(){
	int edad;
	string nombre, apellido;
	float estatura;
	Persona p1( edad, nombre, apellido, estatura); // Crear objeto
	Persona p2( edad, nombre, apellido, estatura); // Objetos
	Persona p3( edad, nombre, apellido, estatura);
	
	//	Se imprimen por default valores para imprimir
	// Persona p1( 38, "Mario", "Rocha", 1.70); // Crear objeto
	// Persona p2( 25, "Cecilia", "Gonzalez", 1.70); // Objetos
	// Persona p3( 21, "Miguel", "Ruiz", 1.70);
	// Persona p4( 29, "Lorena", "Saenz", 1.70);
	
	p1.leer();
	p2.aprender();
	p3.leer();
}
