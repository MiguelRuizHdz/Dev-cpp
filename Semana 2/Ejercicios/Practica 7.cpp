// Escriba un programa que calcule el valor de: 1+2+3+...+n+

#include <iostream>
using namespace std;
main() {
	int numero, i, suma = 0;
	cout << "Ingresa un numero: ";
	cin >> numero;
	for (i=1; i<=numero; i++)
	{
		suma = suma + i;
	}
	
	cout << "\nEl valor total calculado es: " << suma;

}
