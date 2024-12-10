
	//Juan Pablo Soriano González 24041242
		
//matriz diagonal normal e invertida
#include <iostream> //#include<stdio.h>
#include<time.h>//random
#include<windows.h>
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int m1[10][10], m2[10][10], m3[10][10];//declara 3 matrices
	int v1[10], v2[10], v3[10]; //declara 3 vectores
	int i,j,n,r,c; //variables para ciclos, límite, renglón y columna
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	do{
		cout<<"Dime cuantos elementos por lado tiene la matriz? <2-10> ";
		cin>>n;
	}while(n>10 or n<2);
	
	//Para hacer las matrices en un solo par de for
	r=2;
	for(i=0;i<n;i++){ //Ciclo para renglones
		c=1;
		for(j=0;j<n;j++){ //Ciclo para columnas
			m1[i][j]=rand()%10;
			gotoxy(c,r);
			printf("%2d",m1[i][j]);
			m1[i][j]=rand()%10;
			gotoxy(c+n*4,r);
			printf("%2d",m2[i][j]);
			//Operaciones (suma)
			m3[i][j]=m1[i][j]+m2[i][j];
			gotoxy(c+n*8,r);
			printf("%2d",m3[i][j]);
			c=c+3;
		}
		r++;
    }
    
	cout<<"\n";
	system("PAUSE");
	system("CLS");
	
	return 0;
	
}