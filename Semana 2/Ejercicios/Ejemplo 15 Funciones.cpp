// Programa que elee un año y muestra si es o no bisiesto
#include <iostream>
using namespace std;
int bisiesto(int); // declaración o prototipo de la funcion

main() {
	int anio;
	cout << "Introduce anio: ";
	cin >> anio;//2020
	if (bisiesto(anio)) // llamada a la función bisiesto(2020)
		cout << "Bisiesto" << endl;
	else
		cout << "No es bisiesto" << endl;
}

int bisiesto(int a) // definicion de la función
{
	if ( a%4 == 0 and a%100!=0 or a%400==0 ) // if 2020%4 == 0 y 2020%100 != 0 o 2020%400 == 0
		return 1;
	else
		return 0;
}
