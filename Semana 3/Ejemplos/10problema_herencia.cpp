/* Ahora plantearemos el primer problema utilizando herencia. Supongamos que necesitamos implementar dos clases que llamaremos 
Suma y Resta. Cada clase tiene como atributo valor1, valor2 y resultado. Los m�todos a definir son cargar1 
(que inicializa el atributo valor1),
 carga2 (que inicializa el atributo valor2), operar (que en el caso de la clase "Suma" suma los dos atributos y en el caso de la 
 clase "Resta" hace la diferencia entre valor1 y valor2, y otro m�todo mostrarResultado)

Si analizamos ambas clases encontramos que muchos atributos y m�todos son id�nticos. 
En estos casos es bueno definir una clase padre que agrupe dichos atributos y responsabilidades comunes.

La relaci�n de herencia que podemos disponer para este problema es:

                                        Operacion

                        Suma                              Resta
Solamente el m�todo operar es distinto para las clases Suma y Resta (esto hace que no lo podamos disponer en la clase Operacion),
 luego los m�todos cargar1, cargar2 y mostrarResultado son id�nticos a las dos clases, esto hace que podamos disponerlos en la
  clase Operacion. Lo mismo los atributos valor1, valor2 y resultado se definir�n en la clase padre Operacion.
*/
#include<iostream>
using namespace std;

class Operacion {
protected:
    float valor1;
    float valor2;
    float resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};

class Suma: public Operacion{
public:
    void operar();
};


class Resta : public Operacion {
public:
    void operar();
};

class Multiplicacion : public Operacion {
public:
    void operar();
};

class Division : public Operacion {
public:
    void operar();
};



void Operacion::cargar1()
{
    cout << "Ingrese primer valor:";
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese segundo valor:";
    cin >> valor2;
}
void  Operacion::mostrarResultado()
{
    cout <<resultado<<"\n";
}

void Suma::operar()
{
    resultado = valor1 + valor2;
}

void Resta::operar()
{
    resultado = valor1 - valor2;
}

void Multiplicacion::operar()
{
    resultado = valor1 * valor2;
}

void Division::operar()
{
    resultado = valor1 / valor2;
}



 main()
{
    Suma suma1;
    suma1.cargar1();//5
    suma1.cargar2();//6
    suma1.operar(); //5+6
    cout << "La suma de los dos valores es:";
    suma1.mostrarResultado();//11

    Resta resta1;
    resta1.cargar1();//5
    resta1.cargar2();//6
    resta1.operar();//5-6
    cout << "La diferencia de los dos valores es:";
    resta1.mostrarResultado();//-1

    Multiplicacion multiplicacion1;
    multiplicacion1.cargar1();//5
    multiplicacion1.cargar2();//6
    multiplicacion1.operar();//5-6
    cout << "El producto de los dos valores es:";
    multiplicacion1.mostrarResultado();//-1

    Division division1;
    division1.cargar1();//5
    division1.cargar2();//6
    division1.operar();//5-6
    cout << "El cociente de los dos valores es:";
    division1.mostrarResultado();//-1

    cin.get();
}
