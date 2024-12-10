
	//Juan Pablo Soriano González 24041242

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	//Nip pero con el operado ?
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip){ //Cuando hay que comparar en un if, son 2 signos de igual
		printf("**Correcto**");
	}
	else{
		printf("**Incorrecto**\n");
		//Operador de interrogaciÃ³n(?)
		intento>nip?cout<<"Demasiado alto":cout<<"Demasiado bajo";
	}
	
	return 0;
	
}
