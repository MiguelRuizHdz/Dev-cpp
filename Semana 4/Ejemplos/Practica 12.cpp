/* Pr�ctica 12. Realiza un programa con funciones donde encuentre areaDelCirculo, areaDelCuadrado, areaDelRectangulo areaDelTriangulo */

#include<iostream>
#include <cctype>
using namespace std;
float area = 0, base=0, altura=0, pi = 3.1416, radio=0, lado=0;


void areaDelCirculo();
void areaDelCuadrado();
void areaDelRectangulo();
void areaDelTriangulo();


void areaDelCirculo(){
	cout<<"Ingrese el radio del c�rculo: ";
	cin>>radio;
	area=radio*radio*pi;
	cout << "El �rea del c�rculo es: " << area << "\n" <<endl;
}
void areaDelCuadrado(){
	cout<<"Ingrese un lado del cuadrado: ";
	cin>>lado;
	area=lado*lado;
	cout << "El �rea del cuadrado es: " << area << "\n" <<endl;
}
void areaDelRectangulo(){
	cout<<"Ingrese la base del rect�ngulo: ";
	cin>>base;
	cout<<"Ingrese la altura del rect�ngulo: ";
	cin>>altura;
	area=base*altura;
	cout << "El �rea del rect�ngulo es: " << area << "\n" <<endl;
}
void areaDelTriangulo(){
	cout<<"Ingrese la base del tri�ngulo: ";
	cin>>base;
	cout<<"Ingrese la altura del tri�ngulo: ";
	cin>>altura;
	area=(base*altura)/2;
	cout << "El �rea del tri�ngulo es: " << area << "\n" <<endl;
}

main(){
	setlocale(LC_ALL,"Spanish");
	char opcion;
	do {
		cout << "-------------Men� de opciones------------- \n1. Obtener el �rea del C�rculo\n2. Obtener el �rea del Cuadrado\n3. Obtener el �rea del Rect�ngulo\n4. Obtener el �rea del Triangulo\n5. Salir\n\nDigite un numero entre [1-5]: ";
		cin >> opcion;
		if( !(isdigit(opcion)) ) {
			opcion=0;
		}
		system("cls");
		switch(opcion){
			case '1': areaDelCirculo(); break;
			case '2': areaDelCuadrado(); break;
			case '3': areaDelRectangulo(); break;
			case '4': areaDelTriangulo(); break;
			case '5': cout << "\nGracias, hasta luego.\n"<< endl; break;
			default: cout << "\nNo existe opcion para ese numero\n\n";
		}
	}
	while(opcion != '5');
}
