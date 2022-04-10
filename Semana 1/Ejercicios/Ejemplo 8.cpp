#include <iostream>
using namespace std;
main()
{
    char c1, c2, c3, c4;
    // Prueba con cin
    cout << "Introduce 4 caracteres separados por espacios" << endl;
    cin >> c1;
    cin >> c2;
    cin >> c3;
    cin >> c4;
    // Imprimo los caracteres leidos
    cout << "Los 4 caracteres leidos son:\n";
    cout << c1 << c2 << c3 << c4;
}

/*
#include <iostream>
using namespace std;
main()
{
    char c1, c2, c3, c4, c5;    
    cout << "Introduce 4 caracteres en 2 lineas diferentes sin espacio" << endl;
    cin.get(c1);
    cin.get(c2);
    cin.get(c3);
    cin.get(c4);
    cin.get(c5);
    // Imprimo los caracteres leidos
    cout << "Los 4 caracteres leidos son:\n";
    cout.put(c1);
    cout.put(c2);
    cout.put(c3);
    cout.put(c4);
    cout.put(c5);
}
*/
