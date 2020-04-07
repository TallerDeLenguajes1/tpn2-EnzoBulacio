#include <conio.h>
#include <stdio.h>
#include <iostream>
#define N 4 
#define M 5 
using namespace std;

int main(){
int i,f;

int mt[N][M]={
	{20,50,30,60,10},
	{1,5,7,3,8},
	{11,22,33,44,55},
	{89,65,67,11,26}
};
int *punt=&mt[0][0];
for(i = 0;i<N; i++){
	for(f = 0;f<M; f++){
		printf("%4d",*(punt + i * 5 +f));
		}
	printf("\n");
	}
	getchar();
	return 0;
}
