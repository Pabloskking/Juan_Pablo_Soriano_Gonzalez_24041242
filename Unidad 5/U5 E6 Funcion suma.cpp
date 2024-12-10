
//Juan Pablo Soriano González 24041242

//Función
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
int sumar(int a, int b);

int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num1, num2; 
	
	cout<<"Ingrese el primer número: ";
	cin>>num1;
	cout<<"Ingrese el segundo número: ";
	cin>>num2;
	
	int resultado=sumar(num1, num2);
	cout<<"El resultado de la suma es: "<<resultado<<'\n';
	cout<<"El resultado es: "<<sumar(num1, num2);
	
	return 0;
	
}

//clases
int sumar(int a, int b){
	return a+b;
}
