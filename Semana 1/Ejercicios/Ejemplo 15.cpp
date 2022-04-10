#include <string.h>
#include<iostream>
using namespace std;
main(){
	cout << ("Hola! Por favor ingrese su nombre ...\n");
	string cadena = "Hola "; // Se le da un valor inicial al string
	
	string nombre; // Esta cadena contendrá el nombre
	cin >> nombre;
	
	cout << ("Que comeras hoy ...\n")	;
	string cadena1 = ", Comera ";
	
	string comida;
	cin >> comida;
	
	cadena = cadena + nombre; // Se juntan el saludo con el nombre usando "+"
	cout << (cadena);
	
	cadena1 = cadena1 + comida;
	cout << (cadena1);
	return 0;	
}

