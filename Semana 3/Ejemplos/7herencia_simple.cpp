#include<iostream>
using namespace std;
class Animal{
    public: 
        void caminar() {
            cout << "Caminando en Animal" << endl;
        }
};

class Mamifero {
    public:
        void andar() {
            cout << "Caminando en Mamifero" << endl;
        }
};

class Perro : public Animal {};
class Gato : public Animal, public Mamifero {};

int main()
{
    Perro Perro;
    Gato Gato;
    Perro.Animal::caminar();
    Gato.Animal::caminar();
    Gato.Mamifero::andar();

}

