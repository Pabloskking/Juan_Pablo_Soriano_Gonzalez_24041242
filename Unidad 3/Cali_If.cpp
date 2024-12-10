
	//Juan Pablo Soriano Gonz醠ez 24041242

	//programa que obtiene las calificaciones con if

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	
	cout<<"\nDime tu nombre: ";
	cin>>nombre;
	cout<<"\n*Las calificaciones deben de ser del 0 al 100*";
	cout<<"\nDame la calificaci贸n 1: ";
	cin>>cal1;
	cout<<"Dame la calificaci贸n 2: ";
	cin>>cal2;
	cout<<"Dame la calificaci贸n 3: ";
	cin>>cal3;
	
	prom=(cal1+cal2+cal3)/3;
	
	cout<<"Hola, "<<nombre<<". Tu promedio es: "<<prom<<", y tu calificaci贸n final es: ";
	if(prom>=90){
		cout<<"A";
	}
	else{
		if(prom>=80){	
    	cout<<"B";
		}
		else{
			if(prom>=70){
				cout<<"C";
			}
			else{
				if(prom>=60){
					cout<<"D";
				}
				else{
					if(prom<=60){
					cout<<"F";	
					}
				}
			}
		}
	}
		


	return 0;	
}
