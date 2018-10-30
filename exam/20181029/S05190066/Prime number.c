// 
// 
// 
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int remain;
	printf("Please input a positive integer: ");
	do
	{
		scanf("%d", &input);
	}
	while (input <= 0);
	
	remain = input % 2;
	if (remain == 1)
	{
		printf("is prime\n");
	}
	else
	{
		printf("isn't prime\n");
	}
	
	system("pause");
	return 0;
}
