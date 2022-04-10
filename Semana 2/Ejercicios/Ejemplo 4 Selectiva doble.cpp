/* Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma
y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo */
#include<iostream>
using namespace std;

int main() {
	float num1, num2;
	float producto, division, suma, diferencia;
	cout << "Ingrese primer valor: ";
	cin >> num1;
	cout << "Ingrese segundo valor: ";
	cin >> num2;
	if ( num1 == num2) {
		cout << "Los numeros son iguales, no se puede generar ninguna operación" << endl;
	}
	else if ( num1 > num2)
	{
		suma = num1 + num2;
		diferencia = num1 - num2;
		cout << "La suma de los dos valores es: ";
		cout << suma << "\n";
		cout << "La diferencia de los dos valores es: ";
		cout << diferencia;
	}
	else
	{
		producto = num1 * num2;
		division = num1 / num2;
		cout << "El producto de los dos valores es: ";
		cout << producto << "\n";
		cout << "La division de los dos valores es: ";
		cout << division;
	}
}
