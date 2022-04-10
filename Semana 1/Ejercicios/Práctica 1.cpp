/* Práctica 1: Realiza un programa donde pediras datos principales de la persona:
Nombre, Apellido Paterno, Apellido Materno, sexo, telefono, y determinaras su edad */
#include <iostream> 
using namespace std;
int anioActual= 2022;
main() {
	char telefono[11];
    int nacimiento;
    string nombre, aPaterno, aMaterno, genero; 
    cout << "Cual es tu nombre: ";
    cin >> nombre;
    cout << "Cual es tu Apellido Paterno: ";
    cin >> aPaterno;
    cout << "Cual es tu Apellido Materno: ";
    cin >> aMaterno;
    cout << "Ingrese su genero: ";
    cin >> genero;
    cout << "Ingrese su telefono: ";
    cin >> telefono;
    cout << "Ingrese su año de nacimiento: ";
    cin >> nacimiento;
    cout << "Hola " << nombre << " " << aPaterno << " " << aMaterno << endl;
    cout << "Su numéro de telefono es: " << telefono;
    cout << "Su edad es " << anioActual - nacimiento;
}
