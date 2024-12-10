
	//Juan Pablo Soriano Gonz�lez 24041242

	//programa que obtiene el mayor de tres números

#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno,dos,tres,mayor;
	char nombre[20];

	gotoxy(25,2);
	gotoxy(28,3);
	cout<<"Fundamentos de Programación: ";
	gotoxy(14,4);
	cout<<"Programa que determina cúal es el mayor de 3 números";
	
	gotoxy(10,5);
	cout<<"Dime tu nombre: ";
	gets(nombre);
	gotoxy(10,6);
	cout<<"Dime el primer número: ";
	cin>>uno;
	gotoxy(10,7);
	cout<<"Dime el segundo número: ";
	cin>>dos;
	gotoxy(10,8);
	cout<<"Dime el tercer número: ";
	cin>>tres;
	
	if (uno>dos && uno>tres=uno);
	
	}
	else{
		if(dos>uno && dos>tres){
			
			mayor=dos;
			
		}
		else{
			if(tres>uno && tres>dos){
				
			mayor=tres;
			
			}
			else{
				
				mayor=-1; //Número arbitrario
				
			}
		}
	}
	gotoxy(10,10);
	if(mayor==-1){
		
		cout<<"Hola, "<<nombre<<". Todos los números son iguales.";
		
	}
	else{
		
	gotoxy(10,10);
	cout<<"Hola, "<<nombre<<". El mayor de los tres números es: "<<mayor;
	return 0;
	
}
