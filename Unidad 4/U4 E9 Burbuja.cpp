
	//Juan Pablo Soriano González 24041242

#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	int vector[10];//declara un vector de 10 posiciones
	int i,j,n,tempo;
	srand(time(0)); // Inicializa la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//Ciclo para llenar el vector
	{
		vector[i]=rand()%10; // Genera numero aleatorio entre 0 y 9
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(vector[i]>vector[j])
			{
				tempo=vector[j];
				vector[j]=vector[i];
				vector[i]=tempo;
			}
		}
	}
	cout<<"Vector ordenado\n";
	for(i=0;i<n;i++)
		cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	return 0;
}
