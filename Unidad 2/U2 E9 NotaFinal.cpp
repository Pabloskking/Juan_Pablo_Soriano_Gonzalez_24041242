
	//Juan Pablo Soriano Gonz醠ez 24041242

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc,ri,rb,cf;
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
	cout<<"Las respuestas incorrectas restan 1 punto c/u\n";
	cout<<"Las respuestas en blanco valen 0 puntos c/u\n";
	cout<<"Dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"Dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"Dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);//f贸rmula confusa
	cout<<"La calificaci贸n final es: "<<cf;
	printf("\nLa calificaci贸n final es: %d",cf);
	cf=rc*5-ri;
	cout<<"\nLa calificaci贸n final es: "<<cf;
	printf("\nLa calificaci贸n final es: %d",cf);
	return 0;
}
