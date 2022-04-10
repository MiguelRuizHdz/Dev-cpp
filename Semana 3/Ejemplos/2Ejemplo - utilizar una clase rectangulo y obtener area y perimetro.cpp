/* Construya una clase llamada Rectangulo que tenga los siguientes 
atributos: largo y ancho, y los siguientes métodos: perimetro() y area() */
#include<iostream>
using namespace std;
float largo, ancho, _area, _perimetro;
class Rectangulo {
	private: // Atributos
		float largo, ancho;
	public: 
		Rectangulo(float, float); // Constructor
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(float _largo, float _ancho){
	cout<< "Dame el largo: ";
	cin>>largo;
	cout<< "Dame el ancho: ";
	cin>>ancho;
}

void Rectangulo::perimetro(){ //métodos
//	float perimetro;
	_perimetro = (2*largo) + (2*ancho);
	cout<<"El perimetro es: "<< _perimetro<<endl;
}

void Rectangulo::area(){
//	float _area;
	_area = largo * ancho;
	cout<<"El area es: "<<_area<<endl;
}

main(){
	Rectangulo r1(largo, ancho);
	r1.perimetro();
	r1.area();
}
