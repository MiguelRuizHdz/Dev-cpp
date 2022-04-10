#include<iostream> // USAMOS: cin, cout, iostream -> biblioteca
using namespace std;
main() // cuerpo del programa
{
	char nombre[20];
	char ape[20]; // Cadena de hasta 19 carácteres, declaramos la variable
	cout <<"Dame tu nombre: " << endl; // sirve para saltar linea
	cin >> nombre; // Leer la primera palabra
	cout << "Dame tu apellido Paterno: " << endl; // sirve para saltar linea
	cin >> ape;
	cout << "Tu nombre es: " << nombre  << "\n"; // Escribir en nueva línea la cadena
	cout << "\t" << ape;

//	cout << "Tu nombre es: " << nombre << "\t" << ape; // se puede escribir en una línea las dos impresiones
	cout << "\n ¿Como estas?";
	cout << "\t Bienvenido \n \"Al Modulo C++\"";
	/*
		\n -> Salto de línea
		\t -> tabulador de espacio
		cout -> nos sirve para solicitar información o imprimir la misma
		cin -> nos permite guardar el valor de la variable
	*/
}

