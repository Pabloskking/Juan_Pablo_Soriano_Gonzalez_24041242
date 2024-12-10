
	//Juan Pablo Soriano Gonz�lez 24041242

#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <time.h>

using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	srand(time(0));
	int i, v1[5], v2[5], v3[5];
	cout<<"Impresión con Printf\n";
	for(i=0;i<6;i++){
		v1[i]=rand()%11;	//limite del srand
		v2[i]=rand()%11;
		v3[i]=v1[i]+v2[i];
		printf("v1[%d]=%2d v2[%d]=%2d v3[%d]=%3d\n",i,v1[i],i,v2[i],i,v3[i]);
	}
	
	cout<<"\n";
	cout<<"Impresión con Cout\n";
	for(i=0;i<5;i++){
		cout<<"v1["<<i<<"]="<<v1[i]<<"  v2["<<i<<"]="<<v2[i]<<"  v3["<<i<<"]="<<v3[i]<<"\n"; 
	}
	
	return 0;
}
