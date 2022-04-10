// Programa que dados dos n�meros enteros, determina la suma y cual de ellos es mayor, usando dos funciones diferentes.
#include<iostream>
using namespace std;
int a, b; // declaraci�n variable global

void suma (int, int) // Declaraci�n de la funci�n
{
	//Abirmos llaves al inicio de la definici�n
	int sum; //Declaraci�n de las variables locales
	sum= a+b;
	cout<< "El valor de la suma es: " << sum << endl;	
} // Fin de la funci�n suma

void mayor( int, int)
{
	if ( a==b )
		cout << "\n Son iguales\n\n";
	else {
		if(a>b)
			cout << "\nEl valor de a es mayor que el de b\n\n";
		else
			cout << "\nEl valor de b es mayor que el de a\n\n";
	}
}

int main() {
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	suma( a, b ); // llamado de la funci�n
	mayor( a, b ); //unicamente el nombre de la funci�n y de los parametros
}

