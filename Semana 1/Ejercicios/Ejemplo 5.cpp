#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL,"Spanish"); // permite agregar "ñ" y acentos
    float minumero = 3.734574854;
    cout.precision(5);
    cout << "El n�mero ( si se toman 5 d�gitos) es: " << minumero << endl,
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout << "El n�mero ( si se toman 5 cifras despu�s del punto) es: " << minumero << endl;
}
