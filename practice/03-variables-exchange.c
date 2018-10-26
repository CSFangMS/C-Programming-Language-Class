// 交換變數
// 輸入兩個整數a和b, 交換二者的值，然後輸出。
// made by Stanley Fang
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, temp;
    printf("please enter 2 integer in a raw, separete with space: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);

    system("pause");
    return 0;
}