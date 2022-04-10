/* En una tienda se venden artículos de primera necesidad, a los cuales se les aplica un descuento del 20%
de la compra total, si esta es mayor o igual a $50. Diseñe un programa en C++, que a partir del importe total de
la compra muestre lo que debe pagar el cliente */
#include<iostream>
using namespace std;
main() {
	float compra; // declaración de variables
	cout << "Introduzca el valor de la compra:\n" << endl,
	cin >> compra;
	if ( compra >= 50 ) {
		compra = compra*0.8;
		cout << "\n\nEl importe de la compra es de $" << compra << endl;
	}
	cout << "Gracias, por su preferencia.\n" << endl;
}
