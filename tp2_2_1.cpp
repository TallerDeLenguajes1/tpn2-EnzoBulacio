#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>
#define filas 15
using namespace std;
//15 filas columnas:entre 5 y 15
int main(){
	int columnas=0,y,x;
	int cont_p,cont_i;
	srand(time(NULL));
	columnas=5 + rand()%(16-5);
	int arreglo[15][columnas];
	int *punt=&arreglo[0][0];
	
	for(x=0; x<filas; x++){
		cont_p=0;cont_i=0;
		for(y=0; y<columnas; y++){
			*punt=100 + rand() %(1000-100);
			printf("%4d",*punt);
			if(*punt % 2 ==0){
				cont_p++;}
			else{
				cont_i++;}
		}
		
		printf("   pares: %i",cont_p);
		printf("   Impares: %i",cont_i);
		printf("\n");
	}
	
	getchar();
	return 0;
}
