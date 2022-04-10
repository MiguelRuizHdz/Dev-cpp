#include <iostream>
using namespace std;
main()
{
    char c1, c2, c3, c4;    
    cout << "Introduce 4 caracteres en 2 lineas diferentes sin espacio" << endl;
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cin.get(c4);
    // Imprimo los caracteres leidos
    cout << "Los 4 caracteres leidos al reves:\n";
    cout.put(c4);
    cout.put(c3);
    cout.put(c2);
    cout.put(c1);
    cout << endl;
}