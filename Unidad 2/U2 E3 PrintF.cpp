
	//Juan Pablo Soriano Gonz�lez 24041242

#include<stdio.h>//system
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);//Controlar salida
	SetConsoleCP(CP_UTF8);//Controlar entrada
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';	
	/*printf("Impresión simple\n");
	printf("La variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s",c,i,f,letras);
	system("pause");
	printf("Impresion sin espacios \n");
	printf("%d%f%c%s\n",i,f,c,letras);
	printf("Impresión con etiquetas\n");
	printf("Entero: %d Flotante: %f Carácter: %c Cadena: %s\n",i,f,c,letras);
	system("pause");
	printf("Dame un entero: ");
	fflush(stdin);
	scanf("%d",&i);
	puts("Dame un flotante: ");
	fflush(stdin);
	scanf("%f",&f);
	cout<<"Dame un carácter: ";
	fflush(stdin);
	//scanf("%c",&c);//No acepta caracteres especiales
	//cin>>c;//No acepta caracteres especiales
	c=getchar();//No acepta caracteres especiales
	printf("Dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("entero: %d, flotante: %f, carácter: %c, cadena: %s\n",i,f,c,letras);*/
	i=12345;
	f=345.678;
	printf("Probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
	printf("%3d %5d %8d\n",i,i,i);//12345 12345    12345
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n",1,10,20);
	system("pause");
	printf("Probando anchos en floats: 3, 10 y 13 espacios\n");
	printf("%3f %10f %13f\n",f,f,f);//345.678000 345.678000   345.678000
	system("pause");
	printf("Probando anchos en exp: 3, 13 y 16 espacios\n");
	printf("%3e %13e %16e\n",f,f,f);///3.456780e+002 3.456780e+002   3.456780e+002
	system("pause");
	f=123.456; 
	printf("Probando diferentes cantidades de cifras 7.0, 7.3 y 7.1\n");
	printf("%7.0f %7.3f %7.1f\n",f,f,f); /*123.456000 123.456    123.5 el último se
	redondea y se le agregan espacios al inicio. Puede especificarse solo el n° de
	decimales*/
	system("pause");
	printf("Especificando solo las cifras decimales 1 decimal\n");
	printf("%.1f\n",f);//123.5, sin espacios
	system("pause");
	//precisión aplicándose a cadenas
	printf("Probando diferentes precisiones en cadenas: 10, 15 y 15.5 y .5\n");
	printf("%10s %15s %15.5s %.5s",letras,letras, letras,letras);
	system("pause");
	printf("Impresion con signo: %+d\n", i);
	printf("Impresion con espacios al principio y al final del dato y con ceros\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%-3d %-5d %-8d\n",i,i,i);
	printf("%03d %05d %08d\n",i,i,i);
	system("pause");
	printf("%d en octal es %#o y en hexadecimal es %#x", i,i,i);

	return 0;
}
