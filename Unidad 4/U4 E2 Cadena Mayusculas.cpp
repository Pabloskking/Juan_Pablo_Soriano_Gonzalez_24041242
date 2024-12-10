
	//Juan Pablo Soriano Gonz�lez 24041242

	/*Covertir a mayúsculas con cadena */

#include<stdio.h>
#include <windows.h>
#include<iostream>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char cadena[100];
	int i, len;
	
	cout<<"Dame una palabra en minúsculas: ";
	gets(cadena);
	len=strlen(cadena); //Obtiene la longitud de la cadena //regresa la longitud en carcteres
	for(i=0;i<len;i++){
		cadena[i]=toupper(cadena[i]); //Convierte a mayusculas cada elemento
	}
	cout<<"La cadena en mayúsculas es: "<<cadena<<endl;
	cout<<"Impresión elemento por elemento\n";
	for(int i=0;i<len;i++){
		cout<<"cadena["<<i<<"]="<<cadena[i]<<"\n";
	}	
	
	return 0;
	
}
