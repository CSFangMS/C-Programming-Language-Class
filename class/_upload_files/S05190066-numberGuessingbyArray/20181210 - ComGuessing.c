#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// total number guessing, will determine default rounds too
//#define LEN 3

int main(void)
{
	srand(time(NULL));
	int data[5040][4];
	int i, j, k, l, remain = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (i != j && i != k && i != l && j != k && j != l && k != l)
					{
						data[remain][0] = i;
						data[remain][1] = j;
						data[remain][2] = k;
						data[remain][3] = l;
						remain++;
					}
				}
			}
		}
	}
	/*
	for (i = 0; i < 5040; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	*/
	int input[4];
	int tempYN;
	do
	{
		memset(input, 0, 4);
	  	tempYN = 1;
		printf("Input your number: ");
		for (i = 0; i < 4; i++)
		{
			scanf("%d", &input[i]);
		}
		// check -1 < input < 10
		if (input[i] / 10 >= 1 || input[i] < 0)
		{
			printf("error: 10 > number > -1, please re-enter your number.\n\n");
			tempYN = 0;
		}
		// check duplicate
		if(input[0] == input[1] || input[0] == input[2] || input[0] == input[3] || input[1] == input[2] || input[1] == input[3] || input[2] == input[3])
		{
			printf("error: have duplicate, please re-enter your number.\n\n");
			tempYN = 0;
		}
	}
	while(tempYN == 0);
	printf("your number: ", input[i]);
	for (i = 0; i < 4; i++)
	{
		printf("%d ", input[i]);
	}
	printf("\n");

	// AB
	int a = 0, b = 0;
	int com, guess;
	while (a < 4)
	{
		  a = 0, b = 0;
		// com guessing
		com = rand() % remain;//0 ~ 5039 com = 100
		printf("電腦猜的答案為 : %d %d %d %d ",data[com][0],data[com][1],data[com][2],data[com][3]);
		guess++;
		for (i = 0;i < 4;i++)
		{
			for(j = 0;j < 4;j++)
			{
				if (input[i] == data[com][j])
				{
					b++;
	
					if (i == j)
					{
						a++;
						b--;
					}
				}
			}
		}
		printf("    %d A %d B\n", a, b);
		
		// array delete
		for (i = com;i < remain;i++)
		{
			for (j = 0;j < 4;j++)
			{
				data[i][j] = data[i+1][j];
			}
		}
		remain--;
	}
	printf("我贏了~~我總共猜了 %d 次",guess);
	//
	system("pause");
}
