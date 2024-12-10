
	//Juan Pablo Soriano Gonz醠ez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	//uso de if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dime una calificaci贸n: ";
	cin>>cal;
	if (cal>=70){
		cout<<"Suficiente\n";
	}
	system("pause");
	system("cls");
	cout<<"Dime una calificaci贸n: ";
	cin>>cal;
	if (cal>=70){
		cout<<"Suficiente\n";
	}
	else{
		cout<<"No Suficiente\n";
	}
	//lo mismo con ?
	system("pause");
	system("cls");
	cout<<"Dime una calificaci贸n: (Evaluando con ?) ";
	cin>>cal;
	cal>=70?cout<<"Suficiente\n":cout<<"No suficiente\n"; //Sirve como if //2 puntos para no
	
	//if con m谩s de una instrucci贸n
	system("pause");
	system("cls");
	cout<<"Dime una calificaci贸n: ";
	cin>>cal;
	if (cal>=70)
	{
		printf("La calificaci贸n obtenida es: ");
		cout<<"Suficiente\n";
	}
	else
	{
		printf("La calificaci贸n obtenida es: ");
		cout<<"No Suficiente\n";
	}
	return 0;
}
