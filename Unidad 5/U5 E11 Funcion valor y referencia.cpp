
	//Juan Pablo Soriano Gonz醠ez #24041242

/*Programa de ejemplo que usa una funci贸n la cual recibe los 
par谩metros por referencia, y una que los recibe por valor. Ambas
 obtienen el cuadrado del argumento. Cuando es por referencia se
 recibe la direcci贸n de la variable y los cambios que se hacen 
dentro de la funci贸n se mantienen fuera de ella; cuando es por
 valor, se recibe una copia de la variable, las modificaciones
 que se hagan a ese par谩metro dentro de la funci贸n no se  ver谩n 
 reflejados fuera de ella.*/
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;
void cuad1(int x);//copia la direcci髇
void cuad2(int &x);//copia la direcci髇
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
	
