// midterm test
// Remaining life
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year, mon, day;
	int todayYear, todayMon, todayDay;
	int tempa, tempb, tempmon, tempcount;
	int output;
	//days for 80 years with 20 years of 2/29 == 29220
	//month 31 28 31 30 31 30 31 31 30 31 30 31
	//       1  2  3  4  5  6  7  8  9 10 11 12
	scanf("%d %d %d", &year, &mon, &day);
	scanf("%d %d %d", &todayYear, &todayMon, &todayDay);
	if (mon == 2)
		tempmon = 31;
	else if (mon == 3)
		tempmon = 59;
	else if (mon == 4)
		tempmon = 90;
	else if (mon == 5)
		tempmon = 120;
	else if (mon == 6)
		tempmon = 151;
	else if (mon == 7)
		tempmon = 181;
	else if (mon == 8)
		tempmon = 212;
	else if (mon == 9)
		tempmon = 243;
	else if (mon == 10)
		tempmon = 273;
	else if	(mon == 11)
		tempmon = 304;
	else if (mon == 12)
		tempmon = 334;
	else if (mon == 1)
		tempmon = 0;
	tempb = year * 365 + tempmon + day;

	if (todayMon == 2)
		tempmon = 31;
	else if (todayMon == 3)
		tempmon = 59;
	else if (todayMon == 4)
		tempmon = 90;
	else if (todayMon == 5)
		tempmon = 120;
	else if (todayMon == 6)
		tempmon = 151;
	else if (todayMon == 7)
		tempmon = 181;
	else if (todayMon == 8)
		tempmon = 212;
	else if (todayMon == 9)
		tempmon = 243;
	else if (todayMon == 10)
		tempmon = 273;
	else if	(todayMon == 11)
		tempmon = 304;
	else if (todayMon == 12)
		tempmon = 334;
	else if (todayMon == 1)
		tempmon = 0;
	tempa = todayYear * 365 + tempmon + todayDay;
	
	output = 29200 - (tempa - tempb);
	tempcount = 21 - (todayYear - year) / 4;
	output = 29200 - (tempa - tempb) + tempcount;
	
	//printf("%d\n", tempcount);
	printf("%d\n", output);
	system("pause");
	return 0;
}
