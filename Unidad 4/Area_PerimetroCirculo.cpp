
	//Juan Pablo Soriano Gonzalez 24041242

#include <stdio.h> //gets,puts,fflush,system
//#include <conio.h> //getch
//#include<stdlib.h> //system
#include <iostream> //cin, cout //Importante
#include <cmath> //operadores matematicos y constantes
#include <windows.h> //Para el SetConsole
using namespace std; //Importante
int main()
{
	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	float radio, area, perimetro;
	const float PI = 3.1416;
	
	cout<<"Dame el radio del circulo: \n";
	cin>>radio;
	
	area = PI * radio * radio;
	perimetro = 2 * PI * radio;
	
	cout<<"El area es: "<<area<<". El perimetro es: "<<perimetro;
	
	return 0;
}
	
