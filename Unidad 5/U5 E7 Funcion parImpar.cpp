
//Juan Pablo Soriano González 24041242

//Función Par e Impar
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
int parImpar(int numero);

int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int numero, numero2; 
	
	cout<<"Ingrese el número: ";
	cin>>numero;
	parImpar(numero);
	return 0;
	
}

//clases
int parImpar(int numero){
	if(numero%2==0){
		cout<<"El número es par.\n";
	}else{
		cout<<"El número es Impar.\n";
	}
}
