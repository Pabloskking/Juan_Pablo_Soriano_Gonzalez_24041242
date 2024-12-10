
	//Juan Pablo Soriano Gonz�lez 24041242

	/*Calcule la potencia, para ello pide por teclado la base y el exponente.
	Puede ocurrir tres casos:
	El exponente sea posotivo, solo tienes que imprimir la potencia.
	El exponente sea 0, el resultado es 1.
	El exponente sea negativo, el resultado es 1/potencia con el exponente positivo*/

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float exponente, numero, resultado;
	
	cout<<"Dame el valor del número: ";
	cin>>numero;
	cout<<"Dame el valor del exponente: ";
	cin>>exponente;
	
	if(exponente==0){ //Si es 0, el resultado va ser 1
		resultado=1;
	}
	else{
		if(exponente>0){ //Si el exponente es mayor a 0 
			resultado=pow(numero, exponente); //El pow es para subirle a un exponente a un número
		}
		else{
			resultado=1/pow(numero,abs(exponente));
		}
	printf("El resultado es: %5.5f\n",resultado);
	cout<<"El resultado es: "<<resultado;
	}
	return 0;
	

}
