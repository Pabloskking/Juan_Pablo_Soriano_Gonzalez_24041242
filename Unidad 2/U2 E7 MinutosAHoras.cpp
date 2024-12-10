
	//Juan Pablo Soriano González 24041242

#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float minutos, horas, residuo, min2;
	cout<<"Dame la cantidad de minutos a convertir: ";
	cin>>minutos;
	horas=trunc(minutos/60);
	residuo=(minutos/60)-trunc(minutos/60);
	min2=residuo*60;
	cout<<minutos<<" minutos equivale a "<<horas<<":"<<min2<<"\n";
	printf("%2.0f minutos equivalen a %02.0f:%02.0f",minutos,horas,min2);	
	return 0;
}
