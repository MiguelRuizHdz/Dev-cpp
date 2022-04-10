/* Escribir un programa que lea 10 números enteros y luego muester cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5.
Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez */
#include <iostream>
using namespace std;
main() {
	int mult3 = 0, mult5 = 0, valor, f;
	for (f=1; f<=10; f++)
	{
		cout << "Ingrese un valor " << f << ": ";
		cin >> valor;
		if (valor%3 == 0)
		{
			mult3 = mult3 + 1;
		}
		if (valor%5 == 0)
		{
			mult5 = mult5 + 1;
		}
	}
	cout << "Cantidad de valores ingresadors multiplos de 3: " << mult3 << endl; 
	cout << "Cantidad de valores ingresadors multiplos de 5: " << mult5 << endl; 
}
