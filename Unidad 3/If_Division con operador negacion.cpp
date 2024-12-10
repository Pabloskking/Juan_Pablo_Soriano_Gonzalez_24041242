
	//Juan Pablo Soriano Gonz醠ez 24041242

	//programa que pida al usuario dos n煤meros y muestre su divisi贸n
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
		cout<<"La divisi贸n sobre cero no se permite\n";
		}
	system("pause");	
	
	//Condici贸n en forma explicita
	if(!denominador){ 
		cout<<"La divisi贸n sobre cero no se permite\n";
	}
	else{
		cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	}
	
	return 0;
}
