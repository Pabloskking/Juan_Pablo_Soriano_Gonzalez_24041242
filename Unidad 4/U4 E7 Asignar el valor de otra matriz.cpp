
	//Juan Pablo Soriano Gonz�lez 24041242

#include<stdio.h>
#include <windows.h>
#include<iostream>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	long int r,y[5],x[ ]={50,30,-1,0,-32768}; //Inicializa un matriz
	int i;
	puts("Impresión de los arreglos antes de la asignación de uno a otro");
	
	for(i=0;i<5;i++){
		//printf("x[%d]=%10ld  y[%d]=%15ld\n",i,x[i],i,y[i]);
		cout<<"x["<<i<<"]="<<x[i]<<"         y["<<i<<"]="<<y[i]<<"\n";
		puts("Asignación de los valores de x en y, espere un momento");
		for(i=0;i<5;i++){
			printf("x[%3d]");
		}
	}
	
	return 0;
}
