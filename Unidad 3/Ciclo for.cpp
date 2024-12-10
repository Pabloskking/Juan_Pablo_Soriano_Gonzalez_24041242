
	//Juan Pablo Soriano Gonz�lez 24041242

	//programa que dice si es par o impar

#include <math.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, y;
	float z;
	
	//Imprime números de 1 en 1 hasta el 100 mientras x<==100,
	//variación: incremeneto de 1 en 1 y 2 en 2
	
	for(x=0;x<=100;x+=1){
		cout<<x<<",";
    }
    cout<<"\n";
    system("PAUSE");
    system("cls");
	
	for(x=100;x!=65;x-=5){
		z=sqrt(x);
		cout<<"La raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system("PAUSE");
	system("cls");
	
	x=10;
	for(y=10;y!=x;++y){
		cout<<y<<" Dentro del ciclo (nunca entra)\n";
	}
    cout<<y<<" Fuera del ciclo\n";
    system("PAUSE");
    system("cls");
    
    //Variaciones del for
    //Se permite el uso de "," para uso de dos o más variables
    // de control.
    for(x=0,y=0;x+y<10;++x){
    	cout<<"Dame el valor de y: ";
    	cin>>y;
    	cout<<x<<"+"<<y<<"="<<x+y<<" El ciclo continúa minteras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
	system("PAUSE");
	system("cls");
	
	//El for puede no tener todas sus partes
	for(x=0;x!=123;){
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system("PAUSE");
	system("cls");
    
    //Inicialización antes del for
    x=1;
    for(;x<=10;){
    	printf("%d\n",x);
    	++x;//variación fuera de la sentencia for para dentro del cuerpo del ciclo
	}
	system("PAUSE");
	system("cls");
	
	//for(;;)//ciclo infinito
	// printf("Nunca termina\n");
	//Bucles for sin cuerpo (retardadores)
	cout<<"Hola mundo\n";
	for(x=0;x<10000000000;x++);//el ; hace que el ciclo concluya aquí
		cout<<"Hola mundo después de unos cuantos segundos";//No es
		
		
		return 0;
}
