#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int day, mon, year;
	printf("請輸入你的出生年份\n");
	scanf("%d", &year);
	printf("我的出生年份:%d\n\n", year);
	printf("請輸入你的出生月份\n");
	scanf("%d", &mon);
	printf("請接著輸入你的出生日期\n");
	scanf("%d", &day);
	printf("我的生日是:%d年 %d月 %d日\n", year, mon, day);
	system("pause");
	return 0;
}
