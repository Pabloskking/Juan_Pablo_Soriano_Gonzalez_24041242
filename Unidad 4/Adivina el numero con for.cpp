
	//Juan Pablo Soriano Gonzalez 24041242

	//Que pida un nímero y luego por ciclo pedimos otro número, si quedamos arrriba o abajo

#include <iostream>
#include <windows.h>
#include <time.h> //para los numeros random usando la hora
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=1;
	int primerNum,segundoNum;
	
	cout<<"*ADIVINA EL NÚMERO (con ciclo for)*\n";
	
	//Para el random
	srand(time(0)); //Inicializar la semilla de números aleatorios
	primerNum=rand()%101; //Genera número aleatorio entre 0 y 100

	//El ciclo
	for(;x<1000;x++){
		printf("Adivina el número (entre 0 y 100): ");
		cin>>segundoNum;
		if(segundoNum==primerNum){
		    cout<<"FELICIDADES, LE ATINASTE. El número es: "<<primerNum;
			break;
		}
		else{
			if(segundoNum>=primerNum){
		    puts("Cercas, es más abajo");
	        }else{
		    puts("Cercas, es más arriba");
	}
		}
		
	}

	return 0;
}