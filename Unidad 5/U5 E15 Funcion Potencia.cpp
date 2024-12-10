
//Juan Pablo Soriano González 24041242 

//Función Potencia
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int potencia(int n, int e);
int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num, exponente;
	
	cout<<"Dame el número a elevar: ";
	cin>>num;
	cout<<"Dame la potencia: ";
	cin>>exponente;
	cout<<num<<" elevado a la "<<exponente<<"="<<potencia(num,exponente);

	return 0;	
}

//clases
int potencia(int n, int e){
	int i=1;
	int resultado=n;
	for(i=1;i<e;i++){
		resultado=resultado*n;
	}
	return resultado;
}
