/*Tarea 1.- Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. 
Mostrar lo que debe pagar el comprador. */ 

#include<iostream>
using namespace std;
main() {
	int cantidad;
	float precio, total;
	
	cout << "Ingrese el precio del articulo: ";
	cin >> precio;

	cout << "Ingrese la cantidad de articulos: ";
	cin >> cantidad;
	
	total = precio * cantidad;
	
	cout << "El comprador debe pagar $" << total << " pesos.";
}
