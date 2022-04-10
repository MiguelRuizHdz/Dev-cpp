#include <iostream>
/* Escribir un programa que lea 4 numeros reales (4.25), 
los sume y muestre el resultado con dos decimales, y 5 numeros en total*/
using namespace std;
main() {
    float n1, n2, n3, n4, res;
//    cout << "Introduce un numero real para sumar:\n";
//    cin >> n1;
//    cout << "Introduce un numero real para sumar:\n";
//    cin >> n2;
//    cout << "Introduce un numero real para sumar:\n";
//    cin >> n3;
//    cout << "Introduce un numero real para sumar:\n";
//    cin >> n4;
	cout << "Introduce 4 numeros reales separados por renglon con un Enter:" << endl;
	cin >> n1 >> n2 >> n3 >> n4;
    res = n1, n2, n3, n4;
    // Formateo la salida con 2 decimales
    cout.precision(2); // 2
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.setf(ios::right);
    cout.width(6); cout.fill(' '); cout << n1 << endl; // 6
    cout.width(6); cout.fill(' '); cout << n2 << endl;
    cout.width(6); cout.fill(' '); cout << n3 << endl;
    cout.width(6); cout.fill(' '); cout << n4 << endl;
    cout << "______" << endl;
    cout.width(6); cout.fill(' '); cout << res << endl;
}
