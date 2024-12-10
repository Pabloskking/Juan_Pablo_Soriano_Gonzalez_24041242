
//Juan Pablo Soriano González 24041242

//Función Centigrados a fahrenheit y viceversa
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
//Convierte de Centígrados a Fahrenheit
int ctof(double centi);
//Convierte de Fahrenheit a Centígrados
int ftoc(double fahr);

int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	double temperatura; 
	int opcion;
	
	cout<<"Ingrese una temperatura: ";
	cin>>temperatura;
	cout<<"Seleccione la opción deseada: \n";
	cout<<"1. Centígrados a Fahrenheit\n";
	cout<<"2. Fahrenheit a Centígrados\n";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<temperatura<<" grados Centígrados son "<<ctof(temperatura)<<" grados Fahrenheit.\n";
			break;
		case 2:
			cout<<temperatura<<" grados Fahrenheit son "<<ftoc(temperatura)<<" grados Centígrados.\n";
			break;
	}
	return 0;
	
}

//clases
int ctof(double centi){
	return (centi*9/5)+32;
}

int ftoc(double fahr){
	return (fahr-32)*5/9;
}
