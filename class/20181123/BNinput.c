#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define LEN 10

int main(void)
{
	int LEN;
	printf("input length of array: ");
	scanf("%d", &LEN);

	char n[64];
	printf("\ninput your array number: ");
	scanf("%s", &n);
	int l;
	l = strlen(n);

	for (int i = 0; i < LEN - l; i++)
	{
		printf("0");
	}
	printf("%s\n", n);
	
	system("pause");
	return 0;
}
