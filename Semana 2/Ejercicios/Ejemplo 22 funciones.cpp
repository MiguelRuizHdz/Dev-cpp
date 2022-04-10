	/* Realice una función recursiva que sume los primeros n enteros positivos. 
Nota: para plantear la función recursiva tenga en cuenta que la suma puede expresarse 
mediante la siguiente recurrencia:

	suma(n) = 1            , si n=1
			  n+suma(n-1)  , si n>1
*/
#include<iostream>
using namespace std;
//Prototipo de Función
int sumar(int n); // declaración de función
 main(){
	int numero;
	//Pedimos un numero hasta que sea entero positivo numero > 0
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
	}while(numero<=0);
	//Mandamos llamar a la funcion recursiva sumar
	cout<<"La suma es: "<<sumar(numero)<<endl;
	return 0;
}
//Definición de Función
int sumar(int n){
	int suma=0;
	if(n==1){//Caso base
		suma = 1;
	}
	else{//Caso general 5,4,3,2,1,0
		suma = n + sumar(n-1);
	}
	return suma;
}			  
	
