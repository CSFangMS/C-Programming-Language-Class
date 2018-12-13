#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <string.h>

int main(void)
{
    float a, b;
	int i, j;
	
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * 1100 + j * 11;
			
			b = sqrt(a);
			
			if (b - (int)b == 0);
			{
				printf("%f\n", a);
			}
		}
	}
	
	
	//printf("%d", )
	
	system("pause");
	return 0;
}
