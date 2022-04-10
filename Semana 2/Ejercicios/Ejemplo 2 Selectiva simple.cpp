#include<iostream> // selectiva simple
using namespace std;
main(){
	int numero;
	cout<<"Ingrese un numero \t";
	cin >> numero;
	if( numero%6 == 0 ) // % significa el residuo de la divisón 9/3 = 0, 5/3 = 1.3
	{
		cout << "El numero es multiplo de seis\t"<< endl;
	}
	cout << "El numero ingresado es\t" << numero << endl;
}

// = asignando valor, moneda=50
// == igualando, peso==100
