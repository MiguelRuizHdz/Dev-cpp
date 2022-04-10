// Programa que elee un a�o y muestra si es o no bisiesto
#include <iostream>
using namespace std;
int bisiesto(int); // declaraci�n o prototipo de la funcion

main() {
	int anio;
	cout << "Introduce anio: ";
	cin >> anio;//2020
	if (bisiesto(anio)) // llamada a la funci�n bisiesto(2020)
		cout << "Bisiesto" << endl;
	else
		cout << "No es bisiesto" << endl;
}

int bisiesto(int a) // definicion de la funci�n
{
	if ( a%4 == 0 and a%100!=0 or a%400==0 ) // if 2020%4 == 0 y 2020%100 != 0 o 2020%400 == 0
		return 1;
	else
		return 0;
}
