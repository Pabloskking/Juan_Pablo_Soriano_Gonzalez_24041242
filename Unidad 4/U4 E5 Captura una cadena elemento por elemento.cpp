
	//Juan Pablo Soriano Gonz�lez 24041242

	/*Cambia una posición exacta dentro de una cadena */

#include<stdio.h>
#include <windows.h>
#include<iostream>
#include<string>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	char c[11]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'};
	int i=0;
	puts("Captura de una cadena");
	for(i=0;i<11;i++){
		printf("Dame el elemento No. %d\n ",i);
		//cout<<"Dame el elemento No. "<<i;
		fflush(stdin);
		c[i]=getchar(); //cin>>c[i];
	}
	puts("Impresión de la cadena"); //cout<<"Impresión de la cadena");
	for(i=0;i<11;i++){
		printf("%c",c[i]); //cout<<c[i]
	}
	system("PAUSE");
	system("CLS");
	puts("Conversión a mayúsculas"); //cout<<"Conversion a mayúsculas";
	for(i=0;i<11;i++){
		c[i]=toupper(c[i]); //toupper para convertir a mayúsculas
		printf("%c",c[i]);
	}
	puts("\nConversión a minusculas"); //cout<<"Conversion a minusculas";
	for(i=0;i<11;i++){
		c[i]=tolower(c[i]); //tolower para convertir a minusculas
		printf("%c",c[i]);
	}

	return 0;
	
}
