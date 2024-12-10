
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
	
	float base, altura, area, perimetro,lado1, lado2;
	
	cout<<"Dame la base del triangulo: \n";
	cin>>base;
	cout<<"Dame la altura del triangulo: \n";
	cin>>altura;
	cout<<"Dame lado 1 del triangulo: \n";
	cin>>lado1;
	cout<<"Dame lado 2 del triangulo: \n";
	cin>>lado2;
	
	area = (base*altura)/2;
	perimetro = lado1+lado2+base;
	
	cout<<"El area es: "<<area<<" El perimetro es: "<<perimetro;
	
	return 0;
}
	
    
