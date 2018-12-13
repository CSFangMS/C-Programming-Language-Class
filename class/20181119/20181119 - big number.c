#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 5

int main(void)
{
	int a[LEN], b[LEN], c[LEN];
	int i;
	int temp = 0;
	
	
	printf("input each a digit\n");
  	for (i = 0; i < LEN; i++)
	{
	    printf("%2d> ", i + 1);
	    scanf("%d", &a[i]);
	}
	printf("a = ");
	for(i = 0; i < LEN; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n\n");
	
	
	printf("input each b digit\n");
		
  	for (i = 0; i < LEN; i++)
	{
	    printf("%2d> ", i + 1);
	    scanf("%d", &b[i]);
	}
	printf("b = ");
	for(i = 0; i < LEN; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n\n");
	
	for (i = LEN; i > -1; i--)
	{
		c[i] = (a[i] + b[i]) % 10 + temp;
		
		if((a[i] + b[i]) / 10 >= 1)
		{
			temp = 1;
		}
		else
		{
			temp = 0;
		}
	}
	
	printf("Ans: c = ");
	for(i = 0; i < LEN; i++)
	{
		printf("%d", c[i]);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
