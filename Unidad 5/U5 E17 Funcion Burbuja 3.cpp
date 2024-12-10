
//Juan Pablo Soriano Gonz�lez 24041242 

//Funci�n Burbuja 3 
#include <iostream>
#include <string>
#include <conio.h>
#include <time.h> //Uso del time()
#include <windows.h>

using namespace std;
int cuantos(void);
void captura(int arreglo[], int n);
void ordena(int arreglo[], int n);
void imprime(int arreglo[], int n);
void intercambia(int &x, int &y); //Envía dos parámetros por referencia

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int num, arreglo[100];
	srand(time(0));
	num=cuantos();
	
	cout<<"El arreglo será de "<<num<<" elementos\n";
	captura(arreglo,num);
	cout<<"El arreglo original es: \n";
	captura(arreglo,num);
	cout<<"El arreglo ordenado es: \n";
	ordena(arreglo,num);
	imprime(arreglo,num);

	return 0;	
}

//clases
int cuantos(void){
	int n=0;
	do{
		cout<<"Dime cuántos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	return n;
}

void captura(int arreglo[], int n){
	int i;
	for(i=0;i<n;i++)//Ciclo para llenar el vector
		arreglo[i]=rand()%10; // Genera numero aleatorio entre 0 y 9
	return 0;
}

void ordena(int arreglo[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if (arreglo[i]>arreglo[j]){
				intercambia(arreglo[j],arreglo[i]);
			}
		}
	}
}

void imprime(int arreglo[], int n){
	for(int i=0;i<n;i++){
		cout<<"Arreglo["<<i<<"]="<<arreglo[i]<<"\n";
	}
}

void intercambia(int &x, int &y){
	int tempo;
	tempo=y;
	y=x;
	x=tempo;
}
