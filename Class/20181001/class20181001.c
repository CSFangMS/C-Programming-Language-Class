#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int p = 0;
	int q = 0;
	int input;
	printf("input a number:");
	scanf("%d", &input);
	while(p < input){
		q = 0;
		while(q <= p){
			printf("*");
			q++;
		}
		printf("\n");
		p++;
	}
	printf("p=%d ", p);
	printf("q=%d", q);
	printf("\n\n");
	//
	while(p > 0){
		q = p;
		while(q > 0){
			printf("*");
			q--;
		}
		printf("\n");
		p--;
	}
	printf("p=%d ", p);
	printf("q=%d", q);
	printf("\n\n");
	//
	p = q = input;
	//char* sp =" ";
	//printf("%s", sp);
	int space = 0;

	while(p > 0){
		q = p;
		space = input - q;
		while(input > space){
			printf(" ");
			space++;
		}
		while(q > 0){
			printf("*");
			q--;
		}
		printf("\n");
		p--;
	}
	printf("p=%d ", p);
	printf("q=%d", q);
	printf("\n\n");
	system("pause");
	return 0;
}
