/* Programa que lee números hasta que se lee un negativo y muestra la suma de los números léidos */

#include<iostream>
using namespace std;
main()
{
	int suma = 0, num;
	cout << "introduzca un numero: ";
	cin >> num; // 5
	while (num >= 0) // 5>=0   6>=0
	{
		suma = suma+ num; //0 = 0 + 5, 5 = 5+6, 11
		cout << "Introduzca un numero: ";
		cin >> num; //6, -1
	}
	cout << endl << "La suma es: " << suma << endl;
}
