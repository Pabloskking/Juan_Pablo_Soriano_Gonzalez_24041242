
	//Juan Pablo Soriano González 24041242
		
//matriz diagonal normal e invertida
#include <iostream> //#include<stdio.h>
#include<time.h>//random
#include<windows.h>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int m1[10][10], m2[10][10], m3[10][10];//declara 3 matrices
	int v1[10], v2[10], v3[10]; //declara 3 vectores
	int i,j,n;
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10> ";
		cin>>n;
	}while(n>10 or n<2);
	
	//Para hacer las matrices en un solo par de for
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			m1[i][j]=rand()%10;
			cout<<"Dame el valor de m2["<<i<<"]["<<j<<"]: ";
			cin>>m2[i][j];
			//Operaciones (suma)
			m3[i][j]=m1[i][j]+m2[i][j];
		}
    }
    
	//Impresión de matrices
	
	//Primera matriz
	cout<<"Impresión de la primera matriz\n";
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas
			printf("[%d]",m1[i][j]);
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	//Segunda matriz
	cout<<"Impresión de la segunda matriz\n";
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas	
			printf("[%d]",m2[i][j]);
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	//suma matriz
	cout<<"suma matriz\n";
	for(i=0;i<n;i++){ //Ciclo para renglones
		for(j=0;j<n;j++){ //Ciclo para columnas	
			printf("[%d]",m3[i][j]);
		}
		cout<<"\n";
	}
	cout<<"\n";
	system("PAUSE");
	system("CLS");
	
	//Llenado aleatorio de los vectores, impresión y suma
	cout<<"V1 V2 V3\n";
	for(i=0;i<n;i++){
		v1[i]=rand()%10;
		v2[i]=rand()%10;
		v3[i]=rand()%10;
		printf("%2d+%2d=%2d\n"),v1[i],v2[i],v3[i];
	}
	
	return 0;
	
}