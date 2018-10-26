#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, n, temp;
    int  f1 = 0, f2 = 1;
    printf("Enter how much sequence you needs in Fibonacci: ");
    scanf("%d", &n);
//
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", f1);
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    printf("\n");
    
    system("pause");
    return 0;
}