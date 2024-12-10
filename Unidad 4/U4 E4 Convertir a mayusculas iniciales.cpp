
	//Juan Pablo Soriano Gonz·lez 24041242

	/*Cambia la inicial de una palabra a may√∫sculas dentro de una cadena */

#include<stdio.h>
#include <windows.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int x;
	string micadena;
	
	cout<<"Dame tu nombre: ";
	cin>>micadena;
	
	micadena[0]=toupper(micadena[0]);
	if(micadena[x]=" "){
		micadena[x]+1=toupper(micadena[x]);
		x++;
		
	}

	return 0;
	
}
