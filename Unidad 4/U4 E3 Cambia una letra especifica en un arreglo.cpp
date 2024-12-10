
	//Juan Pablo Soriano Gonz·lez 24041242

	/*Cambia una posici√≥n exacta dentro de una cadena */

#include<stdio.h>
#include <windows.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int x;
	string micadena = "Hola mundo";
	
	cout<<"La cadena original es: "<<micadena<<endl;
	char letra1 = micadena[0]; //Acceder al primer caracter de la
	cout<<"La primera letra es: "<<letra1<<endl;
	micadena[1] = 'e'; //Modificar el segundo caracter de la cadena
	cout<<"La cadena modificada es: "<<micadena<<endl;

	for(x=0;x<micadena.length();x++){ //el nombre de la cadena y .length, para definir la longitud de la cadena
		cout<<micadena[x]<<"\n";
	}	
	
	return 0;
	
}
