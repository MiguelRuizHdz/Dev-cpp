/* Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas.
y devuelva los datos(Nombre, país) del atleta que ha ganado el mayor número de medallas.*/

#include<iostream>
using namespace std;

struct Atleta {
	char nombre[20];
	char pais[20];
	int medallas;
}Atleta[100];

main(){
	int i = 0, mayor = 0, posM=0, n;
	cout << "Digite el numero de atletas: ";
	cin >> n;
	for(i; i<n; i++){
		fflush(stdin);
		cout << "Nombre: "; cin.getline(Atleta[i].nombre, 20, '\n');
		cout << "Pais: "; cin.getline(Atleta[i].pais, 10, '\n');
		cout << "Numero de medallas: "; cin >> Atleta[i].medallas;
		
		// Atleta con mas medallas
		if(Atleta[i].medallas > mayor ){
			mayor = Atleta[i].medallas;
			posM=i;
		}
	}
	
	cout << "\n\nAtleta con mas medallas"<<endl;
	cout <<"Nombre: " <<  Atleta[posM].nombre<<endl;
	cout <<"Pais: " <<  Atleta[posM].pais <<endl;
	cout <<"Medallas: " << Atleta[posM].medallas <<endl;
	
}
