/* Práctica 12. Realiza un programa con funciones donde encuentre areaDelCirculo, areaDelCuadrado, areaDelRectangulo areaDelTriangulo */

#include<iostream>
#include <cctype>
using namespace std;
float area = 0, base=0, altura=0, pi = 3.1416, radio=0, lado=0;


void areaDelCirculo();
void areaDelCuadrado();
void areaDelRectangulo();
void areaDelTriangulo();


void areaDelCirculo(){
	cout<<"Ingrese el radio del círculo: ";
	cin>>radio;
	area=radio*radio*pi;
	cout << "El área del círculo es: " << area << "\n" <<endl;
}
void areaDelCuadrado(){
	cout<<"Ingrese un lado del cuadrado: ";
	cin>>lado;
	area=lado*lado;
	cout << "El área del cuadrado es: " << area << "\n" <<endl;
}
void areaDelRectangulo(){
	cout<<"Ingrese la base del rectángulo: ";
	cin>>base;
	cout<<"Ingrese la altura del rectángulo: ";
	cin>>altura;
	area=base*altura;
	cout << "El área del rectángulo es: " << area << "\n" <<endl;
}
void areaDelTriangulo(){
	cout<<"Ingrese la base del triángulo: ";
	cin>>base;
	cout<<"Ingrese la altura del triángulo: ";
	cin>>altura;
	area=(base*altura)/2;
	cout << "El área del triángulo es: " << area << "\n" <<endl;
}

main(){
	setlocale(LC_ALL,"Spanish");
	char opcion;
	do {
		cout << "-------------Menú de opciones------------- \n1. Obtener el Área del Círculo\n2. Obtener el Área del Cuadrado\n3. Obtener el Área del Rectángulo\n4. Obtener el Área del Triangulo\n5. Salir\n\nDigite un numero entre [1-5]: ";
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
