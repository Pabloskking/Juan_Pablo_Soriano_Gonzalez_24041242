
	//Juan Pablo Soriano Gonz�lez 24041242

	//programa que pida al usuario dos números y muestre su división
	//Si el numerador no es cero, o un mensaje de aviso en caso contrario

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float numerador, denominador;
	
	cout<<"Dame un numerador: ";
	cin>>numerador;
	cout<<"Dame un denominador: ";
	cin>>denominador;
	
	if(denominador!=0){ // El operador ! es para negaciones o diferencias //si denominador es !=0 entonces es cierto 
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	}
	else{
		cout<<"La división sobre cero no se permite\n";
		}
	system("pause");	
	
	//Condición en forma explicita
	if(!denominador){ 
		cout<<"La división sobre cero no se permite\n";
	}
	else{
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	}
	
	return 0;
}
