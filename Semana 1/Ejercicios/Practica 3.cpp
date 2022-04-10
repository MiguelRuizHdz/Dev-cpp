// Practica 3: Ejecute el programa y corrija segun sea necesario
#include <iostream>
using namespace std;
main()
{
	int edad;
	char sexo[10], nombre[30];
	float altura;
	int numero1, numero2, suma;

	cout << "Digite su edad: "; cin >> edad;
	
	cout << "Digite su altura en metros: "; 
	cin >> altura;
	cout << "Digite su nombre: "; 
	cin >> nombre;
	cout << "Digite su genero: "; 
	cin >> sexo;
	
	cout << "Digite un numero entero: "; 
	cin >> numero1;
	cout << "Digite otro numero entero: "; 
	cin >> numero2;
	
	suma=numero1+numero2;
	
	cout << "\nEdad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Altura en metros: " << altura << endl;
	cout << "El resultado final es: " << suma << endl;
	
}
