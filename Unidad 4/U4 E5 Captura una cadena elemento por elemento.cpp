
	//Juan Pablo Soriano Gonz醠ez 24041242

	/*Cambia una posici贸n exacta dentro de una cadena */

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
	puts("Impresi贸n de la cadena"); //cout<<"Impresi贸n de la cadena");
	for(i=0;i<11;i++){
		printf("%c",c[i]); //cout<<c[i]
	}
	system("PAUSE");
	system("CLS");
	puts("Conversi贸n a may煤sculas"); //cout<<"Conversion a may煤sculas";
	for(i=0;i<11;i++){
		c[i]=toupper(c[i]); //toupper para convertir a may煤sculas
		printf("%c",c[i]);
	}
	puts("\nConversi贸n a minusculas"); //cout<<"Conversion a minusculas";
	for(i=0;i<11;i++){
		c[i]=tolower(c[i]); //tolower para convertir a minusculas
		printf("%c",c[i]);
	}

	return 0;
	
}
