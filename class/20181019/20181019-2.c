#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j, k;
	//scanf("%d %d %d", &i, &j, &k);
	scanf("%d", &i);
	scanf("%d", &j);
	scanf("%d", &k);
	if(i>j && j>k){
		printf("%d %d %d", i, j, k);
	}
	if(i>k && k>j){
		printf("%d %d %d", i, k, j);
	}
	if(j>i && i>k){
		printf("%d %d %d", j, i, k);
	}
	if(j>k && k>i){
		printf("%d %d %d", j, k, i);
	}
	if(k>i && i>j){
		printf("%d %d %d", k, i, j);
	}
	if(k>j && j>i){
		printf("%d %d %d", k, j, i);
	}
	system("pause");
	return 0;
} 
