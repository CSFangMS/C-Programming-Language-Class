// 三位數反轉
// 輸入一個三位數，分離出它的百位、十位和個位，反轉後輸出。
// Made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int input, ans;
    int temp;

    printf("please enter a 3 digit number: ");
    scanf("%d", &input);

    for (int i = 0; i < 3; i++)
    {
        temp = input % 10;
        input /= 10;
        printf("%d", temp);
    }
    printf("\n");
    system("pause");
    return 0;
}