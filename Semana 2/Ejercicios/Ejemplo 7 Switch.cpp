#include<iostream>
using namespace std;
main() {
	setlocale(LC_ALL,"Spanish");
	int numero;
	
	cout << "Digite un numero entre [1-4]: ";
	cin >> numero;
	switch(numero){
		case 1: cout << "Primavera \n"; break;
		case 2: cout << "Verano \n"; break;
		case 3: cout << "Oto�o \n"; break;
		case 4: cout << "Invierno \n"; break;
		default: cout << "No existe n�mero para ese numero";
	}
}
