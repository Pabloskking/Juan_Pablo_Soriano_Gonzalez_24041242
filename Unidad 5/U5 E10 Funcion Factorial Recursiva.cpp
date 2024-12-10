
	//Juan Pablo Soriano González #24041242

//Función Factorial recursiva 
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
int factorial(int n);
int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
    int num;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>num;
	cout<<"El factorial de "<<num<<" es ";
	num=factorial(num);
	cout<<num;
	return 0;
}

//clases
int factorial(int n){
    if (n==0)
        return 1;
    else
        return n*factorial(n-1);//recursividad
}
