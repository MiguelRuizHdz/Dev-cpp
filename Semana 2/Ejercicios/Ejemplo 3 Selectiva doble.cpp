/*
 * Si se quiere saber su el numero ingresado es mayor que cero el  
 * codigo de nuestro programa seria así, y que sea multiplo de 4
*/

#include<iostream>
using namespace std;
main() {
	int num;
	cout << "Ingrese un numero: ";
	cin >> num;
	if ( num == 0 ) {
		cout << "El numero es igual que cero" << endl;
	}
	else if ( num > 0 ) {
		cout << "El numero es mayor que cero" << endl;
	} else {
		cout << "El numero es menor que cero" << endl;
	}
	
	if ( num%4 == 0) {
		cout << "El numero es multiplo de 4"<< endl;
	}
}
