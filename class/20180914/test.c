#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day, mon, year;
	scanf("%d", &year);
	printf("我的出生年份:%d\n", year);
	scanf("%d", &mon, &day);
	printf("我的生日是:%d月%d日\n", mon, day);
	system("pause");
	return 0;
}