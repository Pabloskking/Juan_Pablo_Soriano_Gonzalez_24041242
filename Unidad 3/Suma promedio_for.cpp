
	//Juan Pablo Soriano González 24041242

	//Prog para generar una tabla de multiplicar con for
	
#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cuantos, suma, x;
	float promedio;
	cuantos=0;
	suma=0;
	for(x=1;x!=-1;){
		cout<<"Dame un nÃºmero, -1 para terminar: ";
		cin>>x;
		cuantos++;
		suma=suma+x;
	}
	cuantos=cuantos-1;
	suma++;
	promedio=suma/cuantos;
	cout<<"Fueron "<<cuantos<<" numeros\n";
	cout<<"La sumatoria es="<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;	
}
