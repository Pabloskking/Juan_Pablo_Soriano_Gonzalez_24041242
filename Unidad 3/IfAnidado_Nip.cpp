
	//Juan Pablo Soriano González 24041242

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
	//uso de if
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip){ //Cuando hay que comparar en un if, son 2 signos de igual
		gotoxy(10,5);
		printf("**Correcto**");
	}
	else{
		gotoxy(10,5);
		printf("**Incorrecto**\n");
		gotoxy(10,7);
		if(intento>nip){
			printf("Demasiado alto");
		}
		else{
			printf("Demasiado bajo");
		}
	}
	
	return 0;
	
}
