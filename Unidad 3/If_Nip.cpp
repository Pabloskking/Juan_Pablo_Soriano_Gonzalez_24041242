
	//Juan Pablo Soriano Gonz·lez 24041242

#include <iostream>
#include <windows.h>
using namespace std;
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
		printf("**Correcto**");
	}
	else{
		printf("**Incorrecto**\n");
		printf("Ingresa otro n√∫mero porfavor");
	}
	
	
	return 0;	
}
