// Objetivo: demostracion de sobrecarga de operadores
#include<iostream>
using namespace std;
class Pareja {
	public:
		double a, b;
		//	constructor parametrizado
		Pareja( const double a, const double b)
		{
			this->a = a; // apuntador
			this->b = b;
		}
};
// Sobrecarga del operador +
Pareja& operator +(const Pareja &p1, const Pareja &p2)
{
	return *(new Pareja(p1.a + p2.b, p1.b + p2.a ) ); // (4,4) (5,6)
}
Pareja& operator -(const Pareja &p1, const Pareja &p2)
{
	return *(new Pareja(p1.a - p2.b, p1.b - p2.a ) ); // (4,4) (5,6)
}
Pareja& operator *(const Pareja &p1, const Pareja &p2)
{
	return *(new Pareja(p1.a * p2.b, p1.b * p2.a ) ); // (4,4) (5,6)
}
Pareja& operator /(const Pareja &p1, const Pareja &p2)
{
	return *(new Pareja(p1.a / p2.b, p1.b / p2.a ) ); // (4,4) (5,6)
}

int main(){
	int a, b;
	cout << "Da el primer numero: ";
	cin >> a;
	cout << "Da el segundo numero: ";
	cin >> b;
	
	Pareja A(a,b);
	Pareja B(a,b);
	Pareja C = A + B;
	Pareja D = A - B;
	Pareja E = A * B;
	Pareja F = A / B;
	
	cout << "A = " << A.a << ',' << A.b << "\n";
	cout << "B = " << B.a << ',' << B.b << "\n";
	cout << "C = " << C.a << ',' << C.b << "\n";
	cout << "D = " << D.a << ',' << D.b << "\n";
	cout << "E = " << E.a << ',' << E.b << "\n";
	cout << "F = " << F.a << ',' << F.b << "\n";
	
	return 0;	
}
