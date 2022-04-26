/*. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y
otro llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno,
luego pedir todos los datos para un alumno, luego calcular su
promedio, y por ultimo imprimir todos sus datos incluidos el promedio.*/

#include<iostream>
using namespace std;

struct Promedio {
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno {
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}Alumno[3];
// Pedir a 3 alumnos y obtener el mayor promedio

int main(){
	float promedio_alumno;
	int pos = 0, mayor = 0,menor=999999, i, posmenor=0, posmayor=0;
	for(pos; pos<3; pos++){
		fflush(stdin);
		cout << "Nombre: "; cin.getline(Alumno[pos].nombre, 20, '\n');
		cout << "Sexo: "; cin.getline(Alumno[pos].sexo, 10, '\n');
		cout << "Edad: "; cin >> Alumno[pos].edad;
		
		cout << "Notas del Examen: "<<endl;
		cout << "Nota1: "; cin >> Alumno[pos].prom.nota1;
		cout << "Nota2: "; cin >> Alumno[pos].prom.nota2;
		cout << "Nota3: "; cin >> Alumno[pos].prom.nota3;
		
		// Sacando el promedio del alumno
		promedio_alumno = (Alumno[pos].prom.nota1+Alumno[pos].prom.nota3+Alumno[pos].prom.nota3)/3;
		if(promedio_alumno >= mayor){
			mayor = promedio_alumno;
			posmayor=pos;
		}
		
		// Sacando el promedio del alumno
		if(promedio_alumno <= menor){
			menor = promedio_alumno;
			posmenor=pos;
		}	
	}
	cout << "\n\nMostrando Datos"<<endl;
	cout <<"Nombre: " << Alumno[posmayor].nombre<<endl;
	cout <<"Sexo: " << Alumno[posmayor].sexo<<endl;
	cout <<"Edad: " << Alumno[posmayor].edad<<endl;
	cout <<"Promedio: " << mayor <<endl;
	
	cout << "\n\nMostrando Datos"<<endl;
	cout <<"Nombre: " << Alumno[posmenor].nombre<<endl;
	cout <<"Sexo: " << Alumno[posmenor].sexo<<endl;
	cout <<"Edad: " << Alumno[posmenor].edad<<endl;
	cout <<"Promedio: " << menor <<endl;
}

