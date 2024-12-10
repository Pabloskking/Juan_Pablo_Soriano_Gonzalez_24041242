
	//Juan Pablo Soriano Gonz�lez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,edad;
	char nom[10];
	//Se puede usar p/una cantidad presyablecida de vueltas
	x=1; //Si no se inicializa al menos se ejectuta una vez
	do{
		cout<<x<<"\n";
		x++; //Variación
	}while(x<10); //condicion
	system("PAUSE");
	//Tambien se usa p/una cantidad desconocida de vueltas
	system("cls");
	
	do{
		cout<<"Dame la edad, <<0 para terminar>> ";
		cin>>x; //Variación
	}while(x!=0);
	system("PAUSE");
	//Se usa especialmente en menus y validaciones:
	
	do{  //Este do es para el menu
		system("cls");
		gotoxy(10,10);
		cout<<"Menu Principal";
		gotoxy(10,11);
		cout<<"1.- Lee el nombre";
		gotoxy(10,12);
		cout<<"2.- Lee la edad";
		gotoxy(10,13);
		cout<<"3.- Imprime los datos";
		gotoxy(10,14);
		cout<<"4.- Terminar";
		gotoxy(10,15);
		cout<<"Selecciona una opcion <1-4> ";
		
		do{ //Este do es para la validación
			gotoxy(30,10);
		    cout<<"            ";  //Es por si el usuario se equivoca, se borre y lo pida de nuevo
		    gotoxy(30,10);
		    cin>>x;
		}while(x<0 or x>4);
		switch(x){
			case 1:
				 	cout<<"Dame tu nombre ";
				 	fflush(stdin);
				 	gets(nom);
				 	break;
			case 2: 
					cout<<"Dame tu edad ";
					cin>>edad;
					break;
			case 3:
					cout<<"Nombre: "<<nom<<"\n";
					cout<<"Edad: "<<edad<<"\n";
					system("PAUSE");
		}
	}while(x!=4);
	
	
    return 0;
}
