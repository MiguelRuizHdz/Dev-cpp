// Practia 9 De la practica anterior genera 2 nuevos metodos y atributos
// Atributo - Variable
// M�todo - es una acci�n
#include<iostream>
using namespace std;
class Persona { // nombre de la clase
	private: // ATRIBUTOS son caracterist�cas de la persona (estos no pueden modificarse solo pueden modificar los metodos
		int edad; 
		string nombre;
		string apellido;
		float estatura;
		float peso;
		string comida;
	public: // Metodos son las acciones de la persona
		Persona(int, string, string, float, float, string); // contructor de la clase
		void leer(); // metodo
		void aprender(); // metodo
		void comer(); // metodo
		void brincar(); // metodo
};

// Contructor sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre, string _apellido, float _estatura, float _peso, string _comida) {
//	cout<<"Dame la edad: ";
//	cin>>edad;
//	cout<<"Dame el nombre: ";
//	cin>>nombre;
//	cout<<"Dame el apellido: ";
//	cin>>apellido;
//	cout<<"Dame tu estatura: ";
//	cin>>estatura;
//	cout<<"Dame tu peso: ";
//	cin>>peso;
//	cout<<"Dime tu comida favorita: ";
//	cin>>comida;
	// Se asinga el valor a cada variable y no se le pde al usuario datos
	edad= _edad; //asigno valor
	nombre = _nombre;
	apellido = _apellido;
	apellido = _apellido;
	estatura = _estatura;
	peso = _peso;
	comida = _comida;
}

void Persona::leer(){
	cout<<"Soy "<< nombre << " " << apellido << " y estoy leyendo C++"<<endl;
}
void Persona::aprender(){
	cout<<"Soy "<< nombre << " y estoy aprendiendo C++ y tengo " << edad <<endl;
}
void Persona::comer(){
	cout<<"Soy "<< nombre << " y estoy comiendo " << comida <<endl;
}
void Persona::brincar(){
	cout<<"Soy "<< nombre << " y estoy brincando"<<endl;
}

int main(){
	int edad;
	string nombre, apellido, comida;
	float estatura, peso;

	// Persona p1( edad, nombre, apellido, estatura, peso, comida); // Crear objeto
	// Persona p2( edad, nombre, apellido, estatura, peso, comida); // Objetos
	// Persona p3( edad, nombre, apellido, estatura, peso, comida);
	
	//	Se imprimen por default valores para imprimir
	Persona p1( 38, "Mario", "Rocha", 1.70, 65.3, "Manzana"); // Crear objeto
	Persona p2( 25, "Cecilia", "Gonzalez", 1.70, 65.3, "Manzana"); // Objetos
	Persona p3( 21, "Miguel", "Ruiz", 1.70, 65.3, "Manzana");
	Persona p4( 29, "Lorena", "Saenz", 1.70, 65.3, "Manzana");
	
	p1.leer();
	p2.aprender();
	p3.brincar();
	p4.comer();
}

