//#include <iostream>
//using namespace std;
//char Nombres[10][10] = {
//	{"Alejandro"}, {"Pedro"}, {"Luis"}, {"Omar"}, {"etc"}, {"17"}, {"Carlos"}, {"8700"}, {"Laura"}
//};
//int main()
//{
//	for( int i= 0; i < 10; i ++) {
//		for( int e = 0; e < 10; e++ ) {
//			cout << Nombres[i][e];
//		}
//		cout << "\n";
//	}
//	cin.get();)
//}


#include <iostream>
using namespace std;
main() {	
	int ventas[3][7] { 
		{2800,7500,2300,4300, 4900, 1300, 1600 }, //0
		{4300,1350,2250,5200,4200,5000,3000}, //1
		{10,50,22,20,40,600,8000} //2
	};
	ventas[1][5]=9000;
	cout<<"Las ventas del dia viernes fueron de: " << ventas[0][18] << endl;
	cout<<"\nLas ventas del dia 4 y 5 fueron de: " << ventas[0][5] + ventas[2][6] << endl;
	cout<<"\nLas ventas del dia 4 y 5 fueron de: " << ventas[1][5] + ventas[2][6] << endl;
}
