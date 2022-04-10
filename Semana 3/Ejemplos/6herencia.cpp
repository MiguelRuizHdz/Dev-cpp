#include<iostream>
using namespace std;
class Vehiculo {
	public: 
		void avanza();
		void recorre(); //método
		void anda(); //método
};

class Coche : public Vehiculo { // clase hija hereda de clase padre
	public:
		void avanza(){
			cout << "Avanza coche." << endl; 
		}
};

class Moto : public Vehiculo { // clase hija hereda de clase padre
	public:
		void recorre(){
			cout << "Recorre moto." << endl; 
		}
};

class Bus : public Vehiculo { // clase hija hereda de clase padre
	public:
		void anda(){
			cout << "Anda el bus." << endl; 
		}
};

main(){
	Moto t;
	Coche c;
	Bus b;
	c.avanza();
	t.recorre();
	b.anda();
}
