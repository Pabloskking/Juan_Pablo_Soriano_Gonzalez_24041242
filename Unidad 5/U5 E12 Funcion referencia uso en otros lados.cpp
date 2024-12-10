
	//Juan Pablo Soriano Gonz·lez #24041242

/*Programa de ejemplo que captura argumentos recibidos por
 referencia y  que son usados despu√©s de su captura en otras
  funciones.*/
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
void captura(char (&nombre)[10],int &num);
float calcula(int num);

int main(void){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char nom[10];
	int num;
	float sueldo;
	captura(nom,num);
	sueldo=calcula(num);
	cout<<"El sueldo de "<<nom<<" es: ";
	printf("%.2f",sueldo);

	return 0;

}

//Clases
void captura(char (&nombre)[10],int &num){
	puts("Dame el nombre del empleado");
	gets(nombre);
	puts("Dame el numero de piezas fabricadas");
	cin>>num;
}

float calcula(int num){
	return num*5.5;
}
