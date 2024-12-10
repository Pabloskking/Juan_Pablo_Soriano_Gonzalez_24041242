
	//Juan Pablo Soriano Gonz�lez 24041242

#include<stdio.h>
#include <windows.h>
#include<iostream>
#include <time.h>
#include<string>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int matriz[5][5]; //Declara una matriz de 5 por 5
	int i, j;
	srand(time(0)); // Inicializar la semilla de números aleatorios
	
	//llenado
	for(i=0;i<5;i++){ //Ciclo para renglones
		for(j=0;j<5;j++){ //Ciclo para columnas
			cout<<"Dame el valor del renglón "<<i<<" columna "<<j<<": ";
			cin>>matriz[i][j];
			//matriz[i][j]=rand()%100; //Genera número aleatorio entre 0 y 99	
		}
		
	}
	
	//impresión
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%3d",matriz[i][j]);
			//cout<<matriz[i][j]<<" ";
		}
		cout<<"\n"; //Para que se vea en forma de matriz (tablita)
	}
	
	return 0;
}
