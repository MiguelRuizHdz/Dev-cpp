// Diseñe un programa que imprima los primeros 10 números ASCENDENTE.
#include <iostream>
using namespace std;
main() {
	int  i=0; // Declaramos nuestro contador con su alor inicial
	cout << "ASCENDENTE" << endl;
	while(i<=10) // Mientras i sea menor o igual a 10
	{
		cout << "\t" << i << endl; // Imprimir el valor de i
		i=i+1; // Aumentar el contador en 1
	}
	cout << "DESCENDENTE" << endl;
	while(0<i) // Mientras 0 sea menor a i
	{
		cout << "\t" << i-1 << endl; // Imprimir el valor de i-1
		i=i-1; // Reduce el contador en 1
	}
}

// Diseñe un programa que imprima los primeros 10 números DESCENDENTE.
//#include <iostream>
//using namespace std;
//main() {
//	int  i=10; // Declaramos nuestro contador con su alor inicial
//	while(0<=i) // Mientras 0 sea menor o igual a i
//	{
//		cout << "\t" << i << endl; // Imprimir el valor de i
//		i=i-1; // Reduce el contador en 1
//	}
//}
