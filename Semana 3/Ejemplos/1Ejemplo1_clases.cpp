// Empleando la definicion de una clase y creacion de un objeto.
#include<iostream>
using namespace std;
class Persona { // declaraci�n de la clase
	private:
		char nombre[40]; // atributo
		int edad; // atributo
	public:
		void inicializar(); // m�todos
		void imprimir(); // m�todos
		void esMayorEdad();
};

void Persona::inicializar()
{
	cout<<"ingrese el nombre: ";
	cin.getline(nombre,40);
	cout<<"Ingrese edad \t";
	cin >>edad;
}

void Persona::imprimir()
{
	cout<<"Nombre:";
	cout<<nombre;
	cout<<"\n";
	cout<<"Edad:";
	cout<<edad;
	cout<<"\n";
}

void Persona::esMayorEdad(){
	if (edad>=18)
	{
		cout <<"Es mayor de edad.";
	}
	else
	{
		cout<<"No es mayor de edad";
	}
//	cin.get();
//	cin.get();
}

main()
{
	Persona Persona; // crear objeto Persona
	Persona.inicializar(); // ejecucuion del m�todo
	Persona.imprimir();
	Persona.esMayorEdad();
}
