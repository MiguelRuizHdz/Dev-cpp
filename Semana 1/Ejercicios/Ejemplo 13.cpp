/* Escriba un fragmento de programa que intercambie los valores de dos variables. */

#include<iostream>
using namespace std;
main() {
	int x, y , aux;
	
	cout << "Digite el valor de x: ";
	cin >> x; // 10
	cout << "Digite el valor de y: ";
	cin >> y; // 8
	
	
	aux = x; // aux = 10
	x=y; // y = 10
	y=aux; // x=8
	
	cout << "\nEl nuevo valor de x es: " << x << endl; // 8
	cout << "El nuevo valor de y es: " << y << endl; // 10
}
