#include <iostream>
using namespace std;
main() {
	setlocale(LC_ALL, "Spanish");
	int suma, a, b, regresar;
	do { // Inicio de while
		cout << "Ingresa el primer valor a sumar: ";
		cin >> a;
		cout << "Ingresa el segundo valor a sumar:";
		cin >> b;
		suma = a + b;
		cout << "El resultado de los dos números es: " << suma << endl;
		cout << "\n\n\n¿Deseas ingresar otros números? \n(1)Si(0)No\n: " << endl;
		cin >> regresar; // Verifica que solo se acepte el número 0 ó 1, si se ingresa un número diferente de 0 ó 1 imprime un mensaje de error
		while( regresar < 0 || regresar > 1) {
			cout << "\nError\n¿Deseas ingresar otros números \n(1)Si\n(0)No\n: " << endl;
			cin >> regresar;
		}
	}
	while(regresar == 1); // termino de do...while
	cout << "Gracias por su preferencia.\n" << endl;	
	
}
