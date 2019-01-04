#include <stdio.h>
#include <stdlib.h>
int fib(int);
int fact(int);

int main(void)
{
    int n, j;
    scanf("%d", &j);
    for (n = 1; n < j; n++)
    {
        printf("%d, ", fact(fib(n)));
    }
    system("pause");
}

int fib(int n)
{
    int i = 1, a0 = 1, a1 = 1, a2 = 1, a3 = 2;
    if (n < 0)
        return 0;
    if (n <= 2)
        return n;
    else
        for (i = 1; i < n; i++)
        {
            a3 = a1 + a2;
            a1 = a2;
            a2 = a3;
        }
    return a3;
}

int fact(int n)
{
    int i = 0, ans = 1;
    if (n <= 0)
        return 1;
    for (i = 1; i <= n; ++i)
        ans *= i;
    return ans;
}