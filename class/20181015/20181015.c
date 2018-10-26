#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	//binary
	int input;
	//decimal
	int n;
	int i, j = 0;
	int temp;
	
	printf("Please enter your binary number to convert: ");
	scanf("%d", &input);
	temp = input;
	
	while(temp != 0){
		i = temp % 10;
		//check input is binary or not
		if(i != 1 && i != 0){
			printf("input error\n");
			return 0;
		}
		n += (i * pow(2, j));
		temp = temp / 10;
		j++;
	}
	printf("The decimal of %d is: ", input);
	printf("%d\n", n);
	
	//11 = 3, 111 = 7, 101 = 5
	system("pause");
	return 0;
}
