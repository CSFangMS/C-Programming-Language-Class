// midterm test
// Climb the ladder
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ladder, temp, i;
	int  f1 = 0, f2 = 1;
	scanf("%d", &ladder);
    for (i = 1; i < ladder + 2; ++i)
    {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    printf("%d\n", f1);
/* 1 1 2 3 5 8 13 21
1x = 1
2x = 2
11
2
3x = 3
111
21
12
4x = 5
1 1 1 1
2 1 1
1 2 1
1 1 2
2 2 
5x = 8
11111
2111
1211
1121
1112
221
212
121
6x = 13
111111
21111
12111
11211
11121
11112
2211
2121
2112
1212
1221
1122
222
7x = 
1111111
211111
121111
112111
111211
111121
111112 6
22111
21211
21121
21112
12211
11221

2221
2212
2122
1222 4
*/
	system("pause");
	return 0;
}
