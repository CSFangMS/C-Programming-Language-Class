#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	/*double r, h;
	double pi = 3.1416;	
	double n;
	
	scanf("%f %f", r, h);
	n = r * r * pi * 2 + 2 * r * h;
	printf("%.3f", n);
	*/
	//100 - 1000
	int input;
	//i = 100 j = 50 k = 10 l = 5 m = 1
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	int temp = 0;
	printf("請輸入1000之內要找零的金額\n");
	scanf("%d", &input);
	temp = input;
	if(temp >= 1000){
		printf("error: 輸入的最大值為1000\n");
		system("pause");
		return 0;
	}
//	while(temp > 0){
		if(temp >= 100){
			i = temp / 100;
			temp = temp % 100;
		}
		if(temp >= 50){
			j = temp / 50;
			temp = temp % 50;
		}
		if(temp >= 10){
			k = temp / 10;
			temp = temp % 10;
		}
		if(temp >= 5){
			l = temp / 5;
			temp = temp % 5;
		}
		if(temp >= 1){
			m = temp / 1;
			temp = temp % 1;
		}
//	}
	//ans output
	printf("%d元可以找成 %d個100元, %d個50元, %d個10元, %d個5元及 %d個1元\n", input, i, j, k, l, m);
	system("pause");
	return 0;
}
