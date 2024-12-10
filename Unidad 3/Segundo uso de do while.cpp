
	//Juan Pablo Soriano Gonz醠ez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, c=0;
	float sueldo, total;
	char opcion, nombre[10];
	while(c!=0) //La condicion nunca se cumple 隆cuidado
	{
		cout<<"Esto nunca se imprime";
		//c=0;
	}
	/*While se puede usar en situaciones en las que se sabe 
	de antemano el numero de vuektas que se habr谩 de ejectuar,
	y debe constar de inicializaci贸n, condici贸n y modificaci贸n*/
	x=1; //Inicializaci贸n
	while(x<11)//condici贸n
	{
		cout<<x<<"\n"; //Imprimir una numeracion 1-10
		x++;
	}
	system("PAUSE");
	//o bien cuando no se sabe cuantas vueltas debe dar
	opcion='s';
	while(opcion=='s' or opcion=='s')
	{
		system("cls");
		cout<<"Dame tu nombre "; 
		fflush(stdin);
		gets(nombre);
		cout<<"Dame tu sueldo ";
		cin>>sueldo;
		total+=sueldo; //Es lo mismo que total=total+sueldo
		printf("Deseas capturar otro empleado <<s/n>>? ");
		cin>>opcion; //Variaci贸n
	}
	printf("Total de salarios= $%5.2f\n",total);
	cout<<"Despues de la pausa el programa se cicla\n";
	system("PAUSE");
	//Cuidado con poner ; despu茅s de un while
	x=0;
	while(x<10); //se cicla
	{
		cout<<x<<"\n";
		x++;
	}
	return 0;
}
