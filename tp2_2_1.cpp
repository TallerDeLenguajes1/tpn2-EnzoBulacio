#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>
#define filas 15
using namespace std;
//15 filas columnas:entre 5 y 15
int main(){
	int columnas=0,y,x;
	srand(time(NULL));
	columnas=5 + rand()%(16-5);
	int arreglo[15][columnas];
	int *punt=&arreglo[0][0];
	
	for(x=0; x<filas; x++){
		for(y=0; y<columnas; y++){//filas
		
			*punt=100 + rand() %(1000-100);
			printf("%4d",*punt);
			}
		printf("\n");
		}
	getchar();
	return 0;
}
