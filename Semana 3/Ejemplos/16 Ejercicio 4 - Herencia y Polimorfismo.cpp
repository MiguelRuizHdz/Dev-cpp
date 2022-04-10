/*Crear un programa en C++ que tenga la siguiente jerarquía de clases: Animal(Clase Padre) -> Humano(Clase Hija) -> Perro(Clase Hija), 
y hacer polimorfismo con el metodo comer(). */
// atributo

#include<iostream>
#include<stdlib.h>
using namespace std;

class Comida{
	private: 
		int edad;
	public:
		Comida(int);
		virtual void comer(); // Polimorfismo con método comer
};

class Humano : public Comida{
	private: 
		string nombre, apellido;
		
	public:
		Humano(int,string, string);
		void comer(); // método
};

class Perro : public Comida{
	private: 
		string nombre,raza;
	public: 
		Perro(int,string,string);
		void comer(); //método
};

//Constructor de la clase Animal
Comida::Comida(int _edad){
	edad = _edad;
}

void Comida::comer(){
	cout<<"y como ";
}

//COnstructor de la clase Humano
Humano::Humano(int _edad,string _nombre, string _apellido) : Comida(_edad){
	nombre = _nombre;
	apellido = _apellido;
}

void Humano::comer(){
	cout<<"Soy "<< nombre<< " "<< apellido<< " ";
	Comida::comer(); //proviene de la clase padre el método
	cout<<" en la mesa, sentado en una silla"<<endl;
}

//Constructor de la clase Perro
Perro::Perro(int _edad,string _nombre,string _raza) : Comida(_edad){
	nombre = _nombre;
	raza = _raza;
}

void Perro::comer(){
	cout<<"Soy "<< nombre<< " ";
	Comida::comer(); //proviene de la clase padre el método
	cout<<" en un plato, en el suelo y soy un " << raza<<endl;
}

int main(){
	Comida *animales[3];
	
	animales[0] = new Humano(21,"Luis", "Gonzalez");
	animales[1] = new Perro(4,"Boby","Pastor Aleman");
   animales[2] = new Humano(35,"Lorena","Guzman");	

	animales[0]->comer();
	animales[1]->comer();	
	animales[2]->comer();	
	

}
