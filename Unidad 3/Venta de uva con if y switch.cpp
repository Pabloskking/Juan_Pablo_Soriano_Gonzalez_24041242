
	//Juan Pablo Soriano Gonz�lez 24041242

	/*La asociación de vinicultores fija un precio inicial al kilo
	de uva, la cual se clasifica en tipos A y B, y además en 
	tamaños 1 y 2.
	Al realizar la venta de uva, debe ser de un solo tipo y tamaño.
	Debe considerar que: si es de tipo A, se cargan 20 centavos al 
	precio inicial cuando es de tamaño */

#include<stdio.h>
#include <windows.h>
#include<iostream>
using namespace std;
main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char tipo;
	int tamano;
	float inicial, kilos, total;
	cout<<"Dime el tipo de uva: ";
	cin>>tipo;
	tipo=toupper(tipo); //El toupper es para convertir a mayusculas
	cout<<"Dime el tamaño de uva: ";
	cin>>tamano;
	
	if((tipo=='A' or tipo=='B') and (tamano==1 or tamano==2)){
		cout<<"Dime cuántos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el precio inicial por kilo: ";
		cin>>inicial;
		switch (tipo){
			case 'A':
				switch(tamano){
					case 1:
						inicial+=.2; //incial=inicial+.2
						break;
					case 2:
						inicial=inicial+.3;
						break;
				}
				break;
			case 'B':
				switch(tamano){
					case 1:
						inicial-=.3; //incial=inicial-.3
						break;
					case 2:
						inicial=inicial-.5;
						break;
				}
				break;	
		}
		total=kilos*inicial;
		cout<<"La venta total es de: "<<total;
	}
	else{
		cout<<"Datos no válidos";
	}
	
	return 0;
	
}
