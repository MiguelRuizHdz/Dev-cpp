/* 6. Mostrar los meses del año, pidiendole al usuario un número entre (1-12), y mostrar el mes al que corresponde.*/

#include<iostream>
using namespace std;
main() {
	setlocale(LC_ALL,"Spanish");
	int numero;
	
	cout << "Digite un numero entre [1-12]: ";
	cin >> numero;
	switch(numero){
		case 1: cout << "Enero \n"; break;
		case 2: cout << "Febrero \n"; break;
		case 3: cout << "Marzo \n"; break;
		case 4: cout << "Abril \n"; break;
		case 5: cout << "Mayo \n"; break;
		case 6: cout << "Junio \n"; break;
		case 7: cout << "Julio \n"; break;
		case 8: cout << "Agosto \n"; break;
		case 9: cout << "Septiembre \n"; break;
		case 10: cout << "Octubre \n"; break;
		case 11: cout << "Noviembre \n"; break;
		case 12: cout << "Diciembre \n"; break;
		default: cout << "No existe mes para ese numero";
	}
}
