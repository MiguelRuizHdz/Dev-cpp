// Programa que lee un número entero que corresponde a una hora y muestra un mensaje la hora que se haya leído.
#include<iostream>
using namespace std;
main() {
	int hora;
	cout << "\nIntroduzca una hora (entre 0 y 24): ";
	cin >> hora;
	if( (hora >= 0 ) && (hora < 12) )
	{
		cout << "\nBuenos dias\n";
	} 
	else if( (hora >= 12 ) && (hora < 18) )
	{
		cout << "\nBuenas tardes\n";
	}
	else if( (hora >= 18 ) and (hora < 24) )
	{
		cout << "\nBuenas noches\n";
	} else {
		cout << "\nHora no valida\n";
	}
}
