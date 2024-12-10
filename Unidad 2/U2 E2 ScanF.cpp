
	//Juan Pablo Soriano González 24041242

#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
main()
{
	int entera;
	float flotante;
	char letra,palabra[50];//declara var char y arreglo char de 50
	cout<<"Lectura de datos usando scanf\n";
	cout<<"Dame un valor entero: ";
	fflush(stdin);
	scanf("%d",&entera);
	cout<<"Dame un valor flotante: ";
	fflush(stdin);
	scanf("%f",&flotante);
	cout<<"Dame un valor char: ";
	fflush(stdin);
	scanf("%c",&letra);
	cout<<"Dame una cadena sin espacios: ";
	fflush(stdin);
	scanf("%s",palabra);/* sin espacios*/
	puts("Impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause");
	cout<<"Dame un entero, un flotante, un char y una cadena sin espacios: ";
	fflush(stdin);
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);/* sin espacios*/
	puts("Impresion de los valores\n");//25 sep1
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	cout.precision(3);
	cout<<"Impresion con precision. El valor flotante a 3 decimales: "<< flotante;
}
