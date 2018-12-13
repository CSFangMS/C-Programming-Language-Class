#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i;
	scanf("%d", &n);
	int fib[n];
	fib[0] = 0;
	fib[1] = 1;
	
	printf("fib 0 = %d\nfib 1 = %d\n", fib[0], fib[1]);
	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("fib %d = %d\n", i, fib[i]);
	
	if (fib[i] < 0)
		{
			printf("overflow!\n");
			break;
		}
		
	float g = (float)fib[i] / (float)fib[i - 1];
	printf("%f\n", g);
	}

	system("pause");
	return 0;
}
