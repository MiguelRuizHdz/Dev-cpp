// Programa que lee dos números y una operación y realiza entre esos números
#include <iostream>
using namespace std;
main() {
	float A, B, Resultado = 0;
	char operador;
	
	cout << "Introduzca un numero: ";
	cin >> A,
	cout << "Introduzca otro numero: ";
	cin >> B;
	
	cout << "Introduzca un operador (-, +, m, d)";
	cin >> operador;
	// Resultado = 0;
	switch (operador)
	{
		case '-': Resultado = A - B;
				break; // rompimiento
		case '+': Resultado = A + B;
				break;
		case 'm': Resultado = A * B;
				break;
		case 'd': Resultado = A / B; // suponemos B!=0, != significa diferente
				break;
		default: cout << "Operador no valido" << endl;
	}
	cout << "El resultado es: ";
	cout << Resultado << endl;
	
	
}
