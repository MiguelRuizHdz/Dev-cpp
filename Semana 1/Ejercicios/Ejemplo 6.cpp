#include<iostream>
/* Escribir un programa que lea tres n�meros reales, los sume y muestre el resultado con tres decimales. */
using namespace std;
main()
{
    setlocale(LC_ALL,"Spanish");
    float a, b, c, res;
	cout << "Introduce los datos que se requieren, tomando en cuenta que solo debe ser m�ximo 8 d�gitos como entero incluyendo decimales\n";
	cout << "Introduce un n�mero real para sumar:\n";
    cin >> a;
	cout << "Introduce un n�mero real para sumar:\n";
    cin >> b;
	cout << "Introduce un n�mero real para sumar:\n";
    cin >> c;
    res = a + b + c;
    // Formateo la salida con 4 decimales
    cout.precision(4); // 4
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.setf(ios::right);
    cout.width(9); cout.fill(' '); cout << a << endl; // 5
    cout.width(9); cout.fill(' '); cout << b << endl;
    cout.width(9); cout.fill(' '); cout << c << endl;
    cout << "_________" << endl;
    cout.width(9); cout.fill(' '); cout << res << endl;

}
