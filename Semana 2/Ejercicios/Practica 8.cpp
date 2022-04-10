/* Practica 8: Escriba una función mult() que acepte dos números en punto flotante como parametros,
multiplique estos dos números y despliegue el resultado. */
#include<iostream>
using namespace std;
float mult( float a, float b);

main() {
	float n1, n2;
	cout << "Ingresa un numero: ";
	cin >> n1;
	cout << "Ingresa otro numero: ";
	cin >> n2;

	cout << "El resultado de la multiplicacion es: " << mult(n1,n2);
}

float mult(float a, float b) {
	float resultado = 0;
	resultado = a * b;
	return resultado;
}
