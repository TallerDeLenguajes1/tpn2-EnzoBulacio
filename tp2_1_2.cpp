#include <conio.h>
#include <stdio.h>
#include <iostream>
#define N 4
#define M 5
using namespace std;

int main(){
int f,c;

int mt[N][M]={
	{20,50,30,60,10},
	{1,5,7,3,8},
	{11,22,33,44,55},
	{89,65,67,11,26}
};
int *punt=&mt[0][0];
for(f = 0;f<N; f++){
	for(c = 0;c<M; c++){
		printf("%4d",*(punt + f * 5 +c));
		}
	printf("\n");
	}
	getchar();
	return 0;
}
