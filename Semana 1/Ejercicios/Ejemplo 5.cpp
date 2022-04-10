#include <iostream>
using namespace std;
main() {
    setlocale(LC_ALL,"Spanish"); // permite agregar "Ã±" y acentos
    float minumero = 3.734574854;
    cout.precision(5);
    cout << "El número ( si se toman 5 dígitos) es: " << minumero << endl,
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout << "El número ( si se toman 5 cifras después del punto) es: " << minumero << endl;
}
