#include<iostream> // USAMOS: cin, cout, iostream -> biblioteca
using namespace std;
main() // cuerpo del programa
{
	char nombre[20];
	char ape[20]; // Cadena de hasta 19 car�cteres, declaramos la variable
	cout <<"Dame tu nombre: " << endl; // sirve para saltar linea
	cin >> nombre; // Leer la primera palabra
	cout << "Dame tu apellido Paterno: " << endl; // sirve para saltar linea
	cin >> ape;
	cout << "Tu nombre es: " << nombre  << "\n"; // Escribir en nueva l�nea la cadena
	cout << "\t" << ape;

//	cout << "Tu nombre es: " << nombre << "\t" << ape; // se puede escribir en una l�nea las dos impresiones
	cout << "\n �Como estas?";
	cout << "\t Bienvenido \n \"Al Modulo C++\"";
	/*
		\n -> Salto de l�nea
		\t -> tabulador de espacio
		cout -> nos sirve para solicitar informaci�n o imprimir la misma
		cin -> nos permite guardar el valor de la variable
	*/
}

