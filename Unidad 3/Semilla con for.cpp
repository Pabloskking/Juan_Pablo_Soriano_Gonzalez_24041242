
	//Juan Pablo Soriano Gonz�lez 24041242

	//Determina si un número es primo

#include <iostream>
#include <windows.h>
#include <time.h> //para los numeros random usando la hora
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	int semilla=0;
	int respuesta;
	
		for(x=1;x<2;x++){
			semilla=semilla+x;
		cout<<"¿Quieres seguir generando? (1 para Si, 0 para No)";
		cin>>respuesta;
		cout<<semilla;
	    
		if(respuesta==1){
			continue;
		}else{
			break;
		}
	    }
	return 0;
}
    
	
