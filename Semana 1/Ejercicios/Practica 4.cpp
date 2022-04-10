/*La calificacion final de un estudiante es el promedio de tres notas: la nota de pr�cticas que cuenta un 30% del total,
la nota te�rica que cuenta un 60% y la nota de participaci�n que cuenta el 10% restante.
Escriba un programa que lea las tres notas del alumno y escriba su nota final. 

Practica -> 30% - 27
Te�rica -> 60% - 48
participaci�n -> 10% - 10

Practica tuve 3 -> 10 + 9 + 8  = 9*.30 Obtuviste 27
Te�rica tuve 3 -> 10 + 9 + 5 = 24/3 = 8 *.6 = 48 puntos
participaci�n -> 10% - 10

Calif prac 1 100 - 15%
calif prac 2  75 -

calif teor 1 100 - 10, 20, 30
calif teor 2  90 -
calif teor 3  70 -

part 10%
*/

// #include<iostream>
// using namespace std;
// main(){
// 	float calPractica, calTeorica, calParticipacion;
// 	int calFinal;
	
// 	cout<<"Ingrese la calificacion de practica: ";
// 	cin>>calPractica;
// 	cout<<"Ingrese la calificacion teoria: ";
// 	cin>>calTeorica;
// 	cout<<"Ingrese la calificacion de participacion: ";
// 	cin>>calParticipacion;
	
// 	calPractica= calPractica * 0.30;
// 	calTeorica *=0.60;
// 	calParticipacion *= 0.10;
	
// 	calFinal = calParticipacion + calTeorica + calPractica;
	 
// 	cout<<"La calificacion final es: "<<calFinal;
// 	return 0;
	
// }

#include<iostream>
using namespace std;
main(){
	float calPractica, calPractica1, calPractica2, calTeorica, calTeorica1, calParticipacion;
	int calFinal;
	
	cout<<"Ingrese la primera calificacion de practica: ";
	cin>>calPractica;
	cout<<"Ingrese la segunda calificacion de practica: ";
	cin>>calPractica1;
	cout<<"Ingrese la tercera calificacion de practica: ";
	cin>>calPractica2;
	cout<<"Ingrese la primera calificacion teoria: ";
	cin>>calTeorica;
	cout<<"Ingrese la segunda calificacion teoria: ";
	cin>>calTeorica1;
	cout<<"Ingrese la calificacion de participacion: ";
	cin>>calParticipacion;
	
	// calPractica= calPractica * 0.30;
	calPractica= ((calPractica + calPractica1 + calPractica2)/3) * 0.30;
	// calTeorica *=0.60;
	calTeorica = ( (calTeorica+ calTeorica1)/2 ) * 0.60;
	calParticipacion *= 0.10;
	
	calFinal = calParticipacion + calTeorica + calPractica;
	 
	cout<<"La calificacion final es: "<<calFinal;
}