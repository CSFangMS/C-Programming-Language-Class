#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[64], str2[64];
	scanf("%s", str);
	int len = strlen(str);
	int i, temp = len;
	for (i = 0; i < len; i++)
	{
		str2[i] = str[temp];
		temp--;
	}
	
	char tempc;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			tempc = str2[i];
			str2[i] = str2[i + 1];
			str2[i + 1] = tempc;
		}
	}
	printf("%s\n", str);
	printf("%s\n", str2);
	
	system("pause");
	return 0;
}
