#include <iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"Spanish"); // permite agregar "�" y acentos
	float radio, area;
	float PI = 3.1416;
	cout << "Radio = ";
	cin >> radio;
	area = PI * ( radio * radio );
	cout << "El �rea es: \n" << area;
}
