#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iostream>
#define filas 15
#define N 4
#define M 5
int main(){
//punto 2
int f,c;
double mt[N][M];
printf("Punto 2\n");
for(f = 0;f<N; f++)
{
	for(c = 0;c<N; c++)
	{
	printf("%lf", mt[f][c]);
	}
	printf("\n");
}
//punto 3

printf("\nPunto 3\n");
int columnas=0,y,x,cont_p,cont_i;
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
 
