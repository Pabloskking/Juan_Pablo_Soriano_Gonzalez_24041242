
//Juan Pablo Soriano González 24041242

//Función Factorial
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

int funcionFactorial(int n);

int main(void)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num;
	
	cout<<"Dime un número para calcular su factorial: ";
	cin>>num;
	num=funcionFactorial(num);
	cout<<"="<<num;
	
	return 0;
	
}

//clases
int funcionFactorial(int n){
	int x;
	cout<<n;
	for(x=n-1;x>=1;x--){
		cout<<"X"<<x;
		n=n*x;
	}
	return 0;
}
