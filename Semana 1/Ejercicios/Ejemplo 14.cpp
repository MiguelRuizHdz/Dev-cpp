/* Escribe un programa que lea de la entrada estandar dos n�meros y 
muestre en la salida est�ndar su suma, resta, multiplicaci�n y divisi�n*/

#include<iostream>
using namespace std;
main(){
	float suma = 0, resta = 0, multiplicacion = 0, division = 0, n1, n2;
	
	cout << "Digite un numero: "; cin >> n1;
	cout << "Digite otro numero: "; cin >> n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout << "\nLa suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl;
	cout << "La division es: " << division << endl;

}
