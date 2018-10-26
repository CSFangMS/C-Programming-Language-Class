// 求圓柱體體積
// 輸入底面半徑r和高h, 輸出圓柱體的表面積。保留3位小數。
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415926

int main(void)
{
    float r, h, area;

    printf("please enter cylinder's radius of the top: ");
    scanf("%f", &r);
    printf("\nplease enter cylinder's height: ");
    scanf("%f", &h);

    area = (2 * pi * r * r) + (2 * r * pi * h);
    //printf("%f %f %f %f\n", pi, r, h, area);

    printf("The surface area of your cylinder is: %.3f\n", area);

    system("pause");
    return 0;
}

