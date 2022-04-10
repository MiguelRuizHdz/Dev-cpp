// Escribir un programa, que con funciones, verifique si un caracter introducido es un número o no
#include <iostream>
using namespace std;
bool verificar_numero (char c);
main()
{
	char car;
	cout << "Ingrese un caracter: ";
	cin >> car;
	if (verificar_numero(car))
	{
		cout << car << " es un numero" << endl;
	}
	else
	{
		cout << car << " no es un numero" << endl;
	}
}

bool verificar_numero(char c)
{
	bool resp;
	switch(c) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			resp = true;
		break;
		default:
			resp = false;
		break;
	}
	return resp;
}
