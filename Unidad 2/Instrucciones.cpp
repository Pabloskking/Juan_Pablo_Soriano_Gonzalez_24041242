
	//Juan Pablo Soriano Gonz�lez 24041242

#include <stdio.h> //gets,puts,fflush
//#include<stdlib.h> //system
#include <iostream> //cin, cout
#include <conio.h> //getch
using namespace std;
main()
{
	char cad[80];//declara un arreglo 80 posiciones char ll
	string cad2;
	char c;//declara una variable de tipo char (solo para
	puts("Dame una cadena (en realidad es un arreglo)"); //jakfa
	gets(cad); //Lee por teclado la variable argumento
	puts("Ejemplo de impresion de puts");
	puts(cad); //Imprime en pantalla la variable argumento
	printf("ejemplo de impresion con printf: ");//Imprime
	printf(cad); //Imprime en pantalla la variable argumentada
	//imprime un salto de línea y la cadena argumentada
	getche(); //Lee por teclado un caracter y lo almacena en 
	//putchar(c); //Imprime la variable de tipo char c
	puts("/n"); //Imprime la cadena argumento, en este caso, con salto de linea
	printf("presiona una tecla y luego enter: "); 
	getchar(); //Lee un caracter y lo almacena en c mediante
	//putchar(c);
	printf("/nPresiona una tecla y continua automaticamente");
	fflush(stdin); //Vacía el buffer de entrada
	getche(); //Lee un caracter
	putchar(c);
	std::cout <<"\n La segunda cadena no tiene espacios: "<<cad;
	cout <<"\nDame una cadena con espacios: ";
	ffush(stdin);
	getline(cin, cad2); //Esta línea no dará problemas con los espacios
	cout << "La cadena es " <<cad << "ya con espacios" << "\n";
	count <<"Captura de un arreglo char con getline\n";
	getline(cin,cad); //Esto no funciona para un arreglo
	//cout << "El arreglo es " << cad << "/n";																					
	
}
