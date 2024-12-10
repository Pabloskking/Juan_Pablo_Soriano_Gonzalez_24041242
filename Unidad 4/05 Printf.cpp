
	//Juan Pablo Soriano Gonzalez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	char c;
	char letras[20]="Hexadecimal"; //La parte de hexadecimal es para inicializarla en ese valor, siempre y cuando cuando quepa en los 20 (Arreglo)
	int i;
	float f;
	i=10;
	f=123.45;
	c='x'; //Va entre apostrofes porque solo es una letra
	printf("Impresión simple\n");
	printf("varchar=%c, varint=%d, varfloat=%f, cadena=%s",c,i,f,letras);
	
	return 0; //Importante cuando se tiene el int
}