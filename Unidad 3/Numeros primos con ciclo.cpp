
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
	int n;
	
	do{
		cout<<"Dime el número (QUE SEA MAYOR A 1): ";
	    cin>>n;
	}while(n<2);
	for(x=2;x<n;x++){
		if(n%x==0){
			break;
		}
	}
	if(x==0){
		cout<<n<<" No es un número primo";
	}else{
		cout<<"El "<<n<<" es primo ";
	}
	
	return 0;

}
