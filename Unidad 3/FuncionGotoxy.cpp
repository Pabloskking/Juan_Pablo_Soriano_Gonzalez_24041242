
	//Juan Pablo Soriano Gonz醠ez 24041242

#include <iostream> //cin, cout //Importante
#include <windows.h> //Para el SetConsole
using namespace std; //Importante

 //Nueva receta de cocina, Para ubicar el cursor en un punto especifico
 void gotoxy(int x, int y){
 	COORD coord;
 	coord.X = x;
 	coord.Y = y;
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }
 
 int main(){
 	SetConsoleOutputCP(CP_UTF8);//Configura la salida
	SetConsoleCP(CP_UTF8);//Configura la entrada
	
	cout <<"Hola, esta es una prueba de la funci贸n gotoxy." << endl;
	gotoxy(1,1); //Mueve el cursor a la columna 1, rengl贸n 1
	cout <<"Este letrero comienza en la posici贸n (1,1).";
	gotoxy(30,2); //Mueve el cursor a la columna 30, rengl贸n 2
	cout <<"Este letrero comienza en la posici贸n (30,2).";
	gotoxy(1,20); //Mueve el cursos a la columna 1, rengl贸n 20
	cout <<"Este letrero comienza en la posici贸n (1,20).";
	system("pause");
	system("cls");
	cout<<"                                            Impresi贸n en las 4 esquinas";
	gotoxy(0,0);
	cout<<"*";
	gotoxy(119,0);
	cout<<"*";
	gotoxy(0,19);
	cout<<"*";
	gotoxy(119,19);
	cout<<"*";
 	return 0;
 }
