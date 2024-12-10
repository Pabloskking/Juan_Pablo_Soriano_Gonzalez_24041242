
	//Juan Pablo Soriano Gonz�lez 24041242

	//programa que dice si es positivo, negativo o cero

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int n;
	
	cout<<"Dame un numero para determinar si es positivo o negativo: ";
	cin>>n;
	n>0?cout<<"El número es positivo\n":cout<<"El número es negativo\n"; //if con cout
	system("pause");
	
	if(n>0){ //if sin considerar el cero 
		cout<<"El numero es positivo\n";
	}
	else{
		cout<<"El numero es negativo\n";	
		}
	system("pause");	
	
	if(n<0){ //if considerando el cero
		cout<<"El número es positivo";

	}
	else{
		if(n==0){
			cout<<"El número es cero";
		}
		else{
			cout<<"El numero es negativo\n";
		}
	
	}
	
	return 0;
	
}
