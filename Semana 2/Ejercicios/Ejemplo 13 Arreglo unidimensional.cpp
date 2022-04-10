#include <iostream>
using namespace std;
main() {
	int ventas[6] { 3400, 5000, 6700, 5100, 7900, 1200 }; //0,1,2,3,4,5
	ventas[4]=4900;
	cout<<"Las ventas del dia viernes fueron de: " << ventas[4];
	cout<<"\nLas ventas del dia 4 y 5 fueron de: " << ventas[4] + ventas[5];
}
