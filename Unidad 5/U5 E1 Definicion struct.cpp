
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

struct Persona{
	string nombre;
	int edad;
	float altura;
};
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	Persona persona1;
	
	//Entrada de datos
	cout<<"Ingrese el nombre: ";
	getline(cin, persona1.nombre);
	cout<<"Ingrese la edad: ";
	cin>>persona1.edad;
	cout<<"Ingrese la altura (en metros): ";
	cin>>persona1.altura;
	
	//Salida de datos
	cout<<"\nDatos de la persona:\n";
	cout<<"Nombre: "<<persona1.nombre<<"\n";
	cout<<"Edad: "<<persona1.edad<<" años"<<"\n";
	cout<<"Altura: "<<persona1.altura<<" m"<<"\n";
		
	return 0;
}