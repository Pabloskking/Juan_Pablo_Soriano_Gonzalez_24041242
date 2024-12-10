
	//Juan Pablo Soriano Gonz�lez 24041242

#include <stdio.h>//gets, puts, fflush
//#include<stdlib.h> //system
#include <iostream> //cin, cout
#include <conio.h> //getch
using namespace std;
main( )
{
	char cad[80];//declara un arreglo 80 posiciones char llamado cad
	string cad2;
	char c; //declara una variable de tipo char (solo para un caracter)
	puts("dame una cadena (en realidad es un arreglo)");//imprime en pantalla la cadena argumento
	gets(cad); //lee por teclado la variable argumento
	puts("Ejemplo de impresion con puts");
	puts(cad); //imprime en pantalla la variable argumento
	printf("ejemplo de impresion con printf: "); //imprime la cadena argumento
	printf(cad); //imprime en pantalla la variable argumento
	printf("\npresiona una tecla y continua automaticamente: ");
	//imprime un salto de linea y la cadena argumento
	getche(); //lee por teclado un caracter y lo almacena en la var c
	//putchar(c); //imprime la variable de tipo char c
	puts("\n");//imprime la cadena argumento, en este caso, un salto
	printf("presiona una tecla y luego enter: ");
	getchar();// lee un caracter y lo almacena en c mediante enter
	//putchar(c);
	printf("\nPresiona una tecla y continua automaticamente: ");
	fflush(stdin); //vacía el buffer de entrada
	getch(); //lee un caracter
	putchar(c);
	std::cout << "Dame una cadena ahora con cin: ";
	std::cin>> cad;
	cout<<"\n La segunda cadena no tiene espacios: "<<cad;
	cout << "\nDame una cadena con espacios: ";
	fflush(stdin);
	getline(cin, cad2); //Esta línea no dará problemas con los espacios en el nombre
	cout << "La cadena es " << cad2 << " ya con espacios" << "\n";
	cout<<"Captura de un arreglo char con getline\n";
	cin>>cad; //esto no funciona para un arreglo
	//cout << "El arreglo es " << cad << "\n";
}

