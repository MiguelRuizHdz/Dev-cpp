#include <iostream>
using namespace std;
main()
{
    char caracter;

    cout << "introduza una palabra: " <<endl;
    cin.get(caracter); //utilizacion de cin.get
    cout << "Las iniciales de las palabras son: " << caracter <<endl;
    // mostrar que se guarde en la variable
}

#include <iostream>
using namespace std;
main()
{
    string cadena1, cadena2, cadena3, cadena4, cadena5;

    cout << "introduza cinco palabras: ";
    cadena1 = cin.get();
    cin.ignore(100, ' ');//utilizacion de cin.ignore donde va a ignorar el caracter de espacio
    cadena2 = cin.get();
    cin.ignore(100, ' ');
    cadena3 = cin.get();
    cin.ignore(100, ' ');
    cadena4 = cin.get();
    cin.ignore(100, ' ');
    cadena5 = cin.get();
    cout << "Las iniciales de las palabras son: " << cadena1 << " " << cadena2 << " " << cadena3 << " " << cadena4 << " " << cadena5;
}


// int -> cuando es un numero entero, ejemplo edad
// float -> numero entero con decimales ejemplo estatura, peso
// double -> numero entero con decimales cuando requiero mas decimales ejemplo pi
// char -> cuando es caracteres [9] Alejandro
// string -> cuando es una cadena de caracteres */
