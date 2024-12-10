
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante{
		string nombre;
		int edad;
		float calificaciones[5]; //Arreglo para almacenar las calificaciones
		int promedio;
	};
	Estudiante estudiante1; //Declara una variable de tipo Estudiante
	Estudiante suma=0;
		
	//Ingreso de datos
	cout<<"Ingrese el nombre del estudiante: ";
	getline(cin, estudiante1.nombre);
	//cin>>estudiante1.nombre;
	cout<<"Ingrese la edad del estudiante: ";
	cin>>estudiante1.edad;
	
	//Ingresamos las calificaciones
	cout<<"Ingrese las calificaciones de 5 materias:\n";
	for(int i=0;i<5;i++){
		cout<<"Calificación unidad "<<i+1<<": ";
		cin>>estudiante1.calificaciones[i];
		suma=suma+estudiante1.calificaciones[i];
	}
	estudiante1.promedio=suma/5;
	
	//Salida de datos
	cout<<"\nDatos de el estudiante:\n";
	cout<<"Nombre: "<<estudiante1.nombre<<"\n";
	cout<<"Edad: "<<estudiante1.edad<<" años"<<"\n";
	cout<<"Calificaciones: ";
	for(int i=0;i<5;i++){
		cout<<estudiante1.calificaciones[i]<<" ";
	}
	cout<<"\nPromedio: "<<estudiante1.promedio;
			
	return 0;
}