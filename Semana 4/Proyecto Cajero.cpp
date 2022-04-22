/*
PROYECTO CAJERO AUTOMATICO - MENU CON OPCIONES
- SALDO DEFINIDO (PARA TODO EL PROCESO) saldo =5000/ 4000 /500
- DEPOSITAR EFECTIVO (AUMENTA SALDO) 2000 saldo =7000
- TRANSFERIR CUENTA BANCARIA 10000. saldo=7000-10000=No cuenta con la suficiencia monetaria
- EXTRAER DINERO 2500, saldo= 4000-2500, 1500
- REALIZAR ARCHIVO TXT con tranferencia de cuenta bancaria.
- SI NO EXISTE SUFICIENCIA INDICAR QUE NO SE PUEDE REALIZAR LA OPERACIÓN

int MONTO=5000
main()
Menú
1. Consultar Saldo - Iniciar  5000/ 8000 - Monto=8000 correcto, 2500, 3500
2. Deposito en Efectivo - 5000+3000 = 8000- 
3- Transferencia - saldo- transferencia = 8000 - 9000 = no cuenta con la suficiencia monetaria - 
										= 8000 - 5000 =3000
- Generar un archivo (txt, docx, pdf) transferencia efectiva  imprima =$, Imprimir un ticket con los datos de la transferencia, #Cuenta, Monto
4. Extraer efectivo = 3000-3100 = no cuenta con la suficiencia monetaria - 
					= 3000 -350 =2650
5. Salir

1.- Se requiere generar una variable global(que funcionara para todo mi programa y se utilizará para cada proceso)
2. 5000+3000=8000
3. 5000-2500 =2500
4. 5000 - 1500 = 3500
*/
#include <cctype>
#include<iostream>
#include<fstream> // libreria para la creación, escritura y lectura de archivos
using namespace std;
float saldo = 5000;
float montoTransferencia = 0, montoExtraer = 0, montoDeposito = 0;
long long cuenta;

void ConsultarSaldo();
void DepositarEfectivo();
void TransferirMonto();
void ExtraerEfectivo();
void ImprimirTicket(long long, float);

void ConsultarSaldo(){
	cout<< "\nSu saldo actual es de: $"<<saldo<<"\n"<<endl;
}

void DepositarSaldo(){
	system("cls");
	do{
		cout << "\n¿Cuanto efectivo quieres depositar?\nMonto: $";
		cin >> montoDeposito;
	}while( montoDeposito < 0 );
	
	saldo += montoDeposito;
	cout << "\nSe realizó el deposito\n";
	ConsultarSaldo();
}

void TransferirMonto(){
	system("cls");
	cout<< "\n¿A qué cuenta le quieres transferir? No. Cuenta: ";
	cin>>cuenta;
	do {
		cout<< "\n¿Cuanto quieres transferir a "<< cuenta << "? Monto disponible: $"<<saldo<<"\nMonto: $";
		cin>>montoTransferencia;
		if(montoTransferencia > saldo){
			cout << "\nNo cuenta con saldo suficiente.\n";
		}
		if(montoTransferencia < 0){
			cout << "\nEl monto no puede ser negativo.\n";
		}
	}while( montoTransferencia > saldo or montoTransferencia < 0 );
	
	saldo -= montoTransferencia;
	cout << "\nSe realizó la transferencia.\n";
	ImprimirTicket(cuenta, montoTransferencia);
	ConsultarSaldo();
}

void ExtraerEfectivo(){
	system("cls");
	do {
		cout<< "\n¿Cuanto efectivo quieres retirar? Monto disponible: $"<<saldo<<"\nMonto: $";
		cin>>montoExtraer;
		if(montoExtraer > saldo){
			cout << "\nNo cuenta con saldo suficiente.\n";
			return;
		}
	}while( montoExtraer > saldo);
	
	saldo -= montoExtraer;
	cout << "\nSe retiro el dinero.\n";
	ConsultarSaldo();
}

void ImprimirTicket(long long _cuenta, float _monto) {
	ofstream archivo;
	
	archivo.open("ticket.txt",ios::out); //Creamos el archivo 
	
	if(archivo.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Se realizó la transferencia satisfactoriamente.\nNo. Cuenta: "<< _cuenta << "\nMonto de transferencia: $"<< _monto << "\n\n"<<endl;
	archivo.close(); //Cerramos el archivo
}

main(){
	setlocale(LC_ALL,"Spanish");
	char opcion;
	do { // Inicio de while
		cout << "-------------Menu------------- \n1. Consultar Saldo\n2. Deposito en Efectivo\n3. Transferencia\n4. Extraer efectivo\n5. Salir\n\nDigite un numero entre [1-5]: ";
		cin >> opcion;
		//	Validar que el caracter sea un numero
		if( !(isdigit(opcion)) ) {
			opcion=0;
		}
		system("cls");
		switch(opcion){
			case '1': ConsultarSaldo(); break;
			case '2': DepositarSaldo(); break;
			case '3': TransferirMonto(); break;
			case '4': ExtraerEfectivo(); break;
			case '5': cout << "\nGracias por su preferencia.\n"<< endl; break;
			default: cout << "\nNo existe opcion para ese numero\n\n";
		}
	}
	while(opcion != '5'); // termino de do...while
}
