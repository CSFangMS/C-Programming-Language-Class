#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number = 10;
	printf("number = %d\n", number);
	number = 20;
	printf("number = %d\n", number);
	number = 20 + 10 - 10 * 5 / 2;
	printf("number = %d\n", number);
	number = number + 5;
	printf("number = %d\n", number);
	number /= 5;
	printf("number = %d\n", number);
	number++;
	printf("number = %d\n", number);
	system("pause");
	return 0;
}
