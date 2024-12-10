
	//Juan Pablo Soriano Gonz�lez 24041242

	//programa que dice si es par o impar

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n;
	
	cout<<"Dame un número para determinar si es par o impar: ";
	cin>>n;
	
	if(n%2){ //% es para dividir entre 2 //El resultado es cero y en c, cero=falso
		cout<<"El número es impar\n";
	}
	else{
		cout<<"El numero es par\n";	
		}
	system("pause");	
	
	//Condición en forma explicita
	if(n%2==0){ //% es para dividir entre 2 //pregunta que si se divide entre 2 es igual 0
		cout<<"El número es par\n";
	}
	else{
		cout<<"El numero es impar\n";
	
	}
	
	return 0;
	
}
