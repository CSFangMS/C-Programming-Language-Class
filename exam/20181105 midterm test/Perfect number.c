// midterm test
// Perfect number
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, input, a, b;
	int i, j, set;
	scanf("%d", &input);
	for (j = 1; j < input + 1; j++)
	{
		for (i = 1; i < j; i++)
		{
			if (j % i == 0)
			{
				a += i;
			}
			//printf("%d %d %d %d\n", a, j, i, input);
		}
		if (a == j)
		{
			printf("%d ", a);
		}
		a = 0;
	}
	system("pause");
	return 0;
}
