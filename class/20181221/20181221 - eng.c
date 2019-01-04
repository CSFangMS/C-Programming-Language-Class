#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[64];
	scanf("%s", str);
	printf("%s", strrev(str));
	
	system("pause");
	return 0;
}
