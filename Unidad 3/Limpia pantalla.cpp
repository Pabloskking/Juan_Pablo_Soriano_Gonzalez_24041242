
	//Juan Pablo Soriano González 24041242

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
	cout <<"Hola. esta es una prueba de limpieza de pantalla." <<endl;
	system("pause");
	system("cls"); //Limpia la pantalla
	system("pause");
	cout <<"La pantalla se ha limpiado." << "/n";
	
	return 0;
}
