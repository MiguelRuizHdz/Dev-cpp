/*  Escribir un programa que, utilizando funciones con parámetros, lea desde el teclado las unidades 
y el precio que quiere comprar, y en función de las unidades introducidas le haga un descuento o no 
(cuando las unidades excedan media docena se aplicará 4% y el 10% cuando excedan la docena) */
#include<iostream>
using namespace std;

// Hacer descuento
float doDesc(float, int);

main()
{
	float total, precio;
	int unidades;
	
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	cout << "Ingrese las unidades que desea: ";
	cin >> unidades;
	total = doDesc(precio, unidades);
	
	cout << "El total a pagar es: $" << total;
}

// Función de Hacer descuento
float doDesc( float precio, int unidades)
{
	float resultado = precio*unidades;
	
	if(unidades >= 12){
		//	Hacer descuento de 10%
		resultado *= .9;
	} else if(unidades >= 6){
		//	Hacer descuento de 4%
		resultado *= .96;
	}
	
	return resultado;
}

