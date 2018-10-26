#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	number = 7 / 4;
	printf("number = %d\n", number);
	number = 7 / 10;
	printf("number = %d\n", number);
	number = 7 % 4;
	printf("number = %d\n", number);
	number = 7 % 10;
	printf("number = %d\n", number);
	system("pause");
	return 0;
}
