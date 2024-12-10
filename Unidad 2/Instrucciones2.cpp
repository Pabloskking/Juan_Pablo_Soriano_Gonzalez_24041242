
	//Juan Pablo Soriano González 24041242

#include <stdio.h> //gets,puts,fflush
#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
using namespace std; //Importante
int main()
{
	int entera;
	float flotante;
	char letra,palabra[50]; //Declara var char y arreglo de 50
	cout<<"Lectura de datos usando scanf\n";
	cout<<"Dame un valor entero: ";
	fflush(stdin); //Limpia el bufer de entrada
	scanf("%d",&entera);
	cout<<"Dame un valor flotante: ";
	fflush(stdin);
	scanf("%f",&flotante);
	cout<<"Dame un valor char: ";
	fflush(stdin);
	scanf("%c",&letra);
	cout<<"Dame una cadena sin espacios: ";
	fflush(stdin);
	scanf("%s",palabra); //sin espacios. Los arreglos no llevan & (amperson)
	puts("Impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	puts(palabra);
	system("pause"); //necesita la libreria stdio.h //sirve como el getche pero te da el mensaje automatico
	cout<<"Dame un entero, un flotante, un char y una cadena sin espacios: ";
	fflush(stdin);
	scanf("%d %f %c %s",&entera,&flotante,&letra,palabra);
	puts("Impresion de los valores\n");
	cout<<entera<<"\n";
	cout<<flotante<<"\n";
	putchar(letra);
	putchar('\n');
	cout<<fixed; //Para decimales
	cout.precision(4); //Decimales
	cout<<"Impresion con precision. El valor flotante a 4 decimales: "<<flotante;
	return 0;
	
	
}
