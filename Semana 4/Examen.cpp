/* 

Elaborar un listado de al menos 4 alumnos de una escuela con los siguientes datos:
1. Nombre
2. Apellido
4. Edad
3. Matrícula
4. Nombre de la materia
5. Calificación

El menú tendrá las siguientes opciones:
1.	Crear lista.
2.	Agregar alumno 
3.	Visualizar listado  
4.	Salir

*/
#include<iostream>
#include <cctype>
#include<fstream>
using namespace std;
int i=0, n=0;
struct Alumno {
	string nombre;
	string apellido;
	int edad;
	int matricula;
	string materia;
	float calificacion;
}Alumno[100];

void CrearLista();
void AgregarAlumno();
void VisualizarListado();
void GuardarAlumno(string, string, int, int, string, float);
void CrearArchivo();

void CrearArchivo(){
	ofstream archivo;
	archivo.open("Calif_alumnos.txt",ios::out); //Creamos el archivo 
	if(archivo.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo crear el archivo\n\n";
		return;
	}
	archivo<<"Lista de Alumnos" << "\n\n"<<endl;
	archivo.close(); //Cerramos el archivo
	cout << "\nSe creó una nueva lista.\n\n";
}

void GuardarAlumno(string _nombre, string _apellido, int _edad, int _matricula, string _materia, float _calificacion ){
	ofstream archivo;
	archivo.open("Calif_alumnos.txt",ios::app); //Abrimos el archivo en modo añadir
	
	if(archivo.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo abrir el archivo\n\n";
		return;
	}
	
	archivo<<"Nombre: " << _nombre << "\nApellido: " << _apellido << "\nEdad: " << _edad << "\nMatricula: " << _matricula << "\nMateria: " << _materia << "\nCalificacion: " << _calificacion << "\n\n"<<endl;
	archivo.close(); //Cerramos el archivo
	cout << "\nSe agregó a la lista.\n\n";
}

void CrearLista(){
	CrearArchivo();
	for(i; i<4; i++){
		cout << "Ingresa el nombre del alumno:" <<  " ";
		cin >> Alumno[i].nombre;
		cout << "Ingresa el apellido del alumno: ";
		cin >> Alumno[i].apellido;
		cout << "Ingresa la edad del alumno: ";
		cin >> Alumno[i].edad;
		cout << "Ingresa la matricula del alumno: ";
		cin >> Alumno[i].matricula;
		cout << "Ingresa la materia del alumno: ";
		cin >> Alumno[i].materia;
		cout << "Ingresa la calificacion del alumno: ";
		cin >> Alumno[i].calificacion;
		GuardarAlumno(Alumno[i].nombre, Alumno[i].apellido, Alumno[i].edad, Alumno[i].matricula, Alumno[i].materia, Alumno[i].calificacion);
	}
}
void AgregarAlumno(){
	i = i+1;
	cout << "Ingresa el nombre del alumno:" <<  " ";
	cin >> Alumno[i].nombre;
	cout << "Ingresa el apellido del alumno: ";
	cin >> Alumno[i].apellido;
	cout << "Ingresa la edad del alumno: ";
	cin >> Alumno[i].edad;
	cout << "Ingresa la matricula del alumno: ";
	cin >> Alumno[i].matricula;
	cout << "Ingresa la materia del alumno: ";
	cin >> Alumno[i].materia;
	cout << "Ingresa la calificacion del alumno: ";
	cin >> Alumno[i].calificacion;
	GuardarAlumno(Alumno[i].nombre, Alumno[i].apellido, Alumno[i].edad, Alumno[i].matricula, Alumno[i].materia, Alumno[i].calificacion);
}
void VisualizarListado(){
	ifstream archivo;
	string contenido;
	archivo.open("Calif_alumnos.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo leer el archivo\n\n";
		return;
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,contenido);
		cout<<contenido<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}

int main(){
	setlocale(LC_ALL,"Spanish");
	char opcion;
	do {
		cout << "-------------Menu de opciones------------- \n1. Crear lista\n2. Agregar alumno\n3. Visualizar listado\n4. Salir\n\nDigite un numero entre [1-4]: ";
		cin >> opcion;
		if( !(isdigit(opcion)) ) {
			opcion=0;
		}
		system("cls");
		switch(opcion){
			case '1': CrearLista(); break;
			case '2': AgregarAlumno(); break;
			case '3': VisualizarListado(); break;
			case '4': cout << "\nGracias, hasta luego.\n"<< endl; break;
			default: cout << "\nNo existe opcion para ese numero\n\n";
		}
	}
	while(opcion != '4');
}
