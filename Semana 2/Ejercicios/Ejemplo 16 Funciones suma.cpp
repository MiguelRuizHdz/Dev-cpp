// Programa que dados dos números enteros, determina la suma y cual de ellos es mayor, usando dos funciones diferentes.
#include<iostream>
using namespace std;
int a, b; // declaración variable global

void suma (int, int) // Declaración de la función
{
	//Abirmos llaves al inicio de la definición
	int sum; //Declaración de las variables locales
	sum= a+b;
	cout<< "El valor de la suma es: " << sum << endl;	
} // Fin de la función suma

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
	suma( a, b ); // llamado de la función
	mayor( a, b ); //unicamente el nombre de la función y de los parametros
}

