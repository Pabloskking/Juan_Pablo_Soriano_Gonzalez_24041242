
	//Juan Pablo Soriano González 24041242
		
//Margen y vector con gotoxy
#include <iostream> //#include<stdio.h>
#include <time.h>//random
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int r, vec[10]; //variables para ciclos, límite, renglón y columna
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	cout<<"Maximice la pantalla y presione una tecla";
	getche();
	system("CLS");
	
	for(r=0;r<=119;r++){ //165 ciclo para dibujar las líneas horizontales
		gotoxy(r,0); //linea superior
		printf("*");
		gotoxy(28,r); //40 linea inferior
		printf("*");
	}
	
	for(r=0;r<=28;r++){ //28 ciclo para dibujar las líneas horizontales
		gotoxy(r,0); //linea izquierda
		printf("*");
		gotoxy(199,r); //119 línea 
		printf("*");
	}
	
	gotoxy(40,2); //72,17
	cout<<"Impresioón del vector";
	for(r=0;r<10;r++){
		vec[r]=rand()%100;
		gotoxy(40,r+3);
		printf("%d",vec[r]);
	}
	
	gotoxy(5,13);
	getche();
	
	return 0;
	
}