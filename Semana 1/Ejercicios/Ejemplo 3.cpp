#include <iostream>
using namespace std;
main(){
	float d1, d2, suma=0; // declarar variables númericas con decimales 5.52, 7.58
	string nombre, apellido;
	cout << "Introduce un numero entero: ";
	cin >> d1;
	cout << "Introduce otro numero: ";
	cin >> d2;
	cout << "Introduce tu nombre: ";
	cin >> nombre;
	cout << "Introduce tu apellido: ";
	cin >> apellido;
	//suma=d1+d2;
	cout << "La suma es: " << d1+d2 << endl; // salto de línea
	cout << "Tu nombre es: " << nombre << " y tu apellido es: " << apellido << endl;
	cout << "Tu nombre es: " << nombre << " " << apellido;
}
