
	//Juan Pablo Soriano Gonz�lez #24041242

/*Programa de ejemplo que usa una función la cual recibe los 
parámetros por referencia, y una que los recibe por valor. Ambas
 obtienen el cuadrado del argumento. Cuando es por referencia se
 recibe la dirección de la variable y los cambios que se hacen 
dentro de la función se mantienen fuera de ella; cuando es por
 valor, se recibe una copia de la variable, las modificaciones
 que se hagan a ese parámetro dentro de la función no se  verán 
 reflejados fuera de ella.*/
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
void cuad1(int x);//copia la direcci�n
void cuad2(int &x);//copia la direcci�n
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int x;
	cout<<"dame un valor para elevar al cuadrado ";
	cin>>x;
	cout<<"x="<<x<<" antes de enviarla a la funcion 1";
	system("PAUSE");
	cuad1(x);
	cout<<"\nx="<<x<<" despues de enviarla a la funcion 1";
	system("PAUSE");
	cuad2(x);
	cout<<"\nx="<<x<<" despues de enviarla a la funcion 2";

	return 0;

}

//Clases
void cuad1(int x){
	x=x*x;
	cout<<"\nx="<<x<<" DENTRO de la funcion 1";
	system("PAUSE");
}

void cuad2(int &x){
	x=x*x;
	cout<<"\nx="<<x<<" DENTRO de la funcion 2";
	system("PAUSE");
}	
	
