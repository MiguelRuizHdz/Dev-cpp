// Escribir un programa que solicite ungresar 10 notas de alumnos y nos informe cuántos tienen ntas mayores o iguales a 7 y cuántos menores.
#include<iostream>
using namespace std;
int main() {
	int n, x = 1, nota, conta1 = 0, conta2 = 0;
	cout << "Cuantas notas deseas preguntar: ";
	cin >> n;
	while (x <= n)
	{
		cout << "Ingrese nota " << x << ": ";
		cin >> nota;
		if (nota >= 7)
		{
			conta1= conta1 + 1; // Acumulador 
		}
		else
		{
			conta2 = conta2 + 1;
		}
		x = x +1; //contador
	}
	cout << "Cantidad de alumnos con notas mayores o iguales a 7: ";
	cout << conta1;
	cout << "\n";
	cout << "Cantidad de alumnos con notas menores a 7: ";
	cout << conta2;
}

