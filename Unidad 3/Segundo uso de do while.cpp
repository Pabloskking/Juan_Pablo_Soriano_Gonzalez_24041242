
	//Juan Pablo Soriano Gonz�lez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, c=0;
	float sueldo, total;
	char opcion, nombre[10];
	while(c!=0) //La condicion nunca se cumple ¡cuidado
	{
		cout<<"Esto nunca se imprime";
		//c=0;
	}
	/*While se puede usar en situaciones en las que se sabe 
	de antemano el numero de vuektas que se habrá de ejectuar,
	y debe constar de inicialización, condición y modificación*/
	x=1; //Inicialización
	while(x<11)//condición
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
		cin>>opcion; //Variación
	}
	printf("Total de salarios= $%5.2f\n",total);
	cout<<"Despues de la pausa el programa se cicla\n";
	system("PAUSE");
	//Cuidado con poner ; después de un while
	x=0;
	while(x<10); //se cicla
	{
		cout<<x<<"\n";
		x++;
	}
	return 0;
}
