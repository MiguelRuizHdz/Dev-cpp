/* De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 5000 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 5000 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 5000 mostrar el sueldo en pantalla sin cambios. */
#include<iostream>
using namespace std;
main() {
	setlocale(LC_ALL,"Spanish");
	float sueldo, sueldoFinal;
	int antiguedad_anios;
	cout << "Ingresa tus años de antiguedad: ";
	cin >> antiguedad_anios;
	cout << "Ingresa tu sueldo: $";
	cin >> sueldo;
	
	if ( sueldo < 5000 && antiguedad_anios > 10) {
		sueldoFinal = sueldo * 1.2;
	} else if ( sueldo < 5000 && antiguedad_anios < 10 ) {
		sueldoFinal = sueldo * 1.05;
	} else if ( sueldo >= 5000 ) {
		sueldoFinal = sueldo;
	}
	
	cout << "\nTu sueldo es de $" << sueldoFinal;
	
	
}
