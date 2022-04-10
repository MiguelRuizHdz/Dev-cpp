#include <iostream>
using namespace std;
main()
{
	int c1, c2, c3, c4;
	int p1, p2, p3, p4;
	cout << "Introduce 4 pares <capitulo y  página separados con un espacio por renglon y continua con un Enter" << endl;
	cin >> c1 >> p1 >> c2 >> p2 >> c3 >> p3 >> c4 >> p4;
	cout.setf(ios::right);
	cout << "Capítulo " << c1 << " .................. " ;
	cout.width(3); cout.fill(' '); cout << p1 << endl;
	cout << "Capítulo " << c2 << " .................. " ;
	cout.width(3); cout.fill(' '); cout << p2 << endl;
	cout << "Capítulo " << c3 << " .................. " ;
	cout.width(3); cout.fill(' '); cout << p3 << endl;
	cout << "Capítulo " << c4 << " .................. " ;
	cout.width(3); cout.fill(' '); cout << p4 << endl;
}
