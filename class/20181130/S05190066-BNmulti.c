#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100

int main(void)
{
    char num1[LEN], num2[LEN];
    char a[LEN] = {'\0'};
    int shift = 0;

    //scanf("%s", num1);
    //scanf("%s", num2);
    fgets(num1, LEN, stdin);
    fgets(num2, LEN, stdin);

    int n1 = strlen(num1);
    int n2 = strlen(num2);   

    for (int i = n2 - 2; i >= 0; i--)
    {
        int carry = 0, k = shift;
        for (int j = n1 - 2; j >= 0; j--)
        {
            int temp = (num1[j] - '0') * (num2[i] - '0') + carry;
            if (a[k])
                temp += a[k] - '0';
            a[k++] = temp % 10 + '0';
            carry = temp / 10;
        }
        if (carry > 0)
            a[k] = carry +'0'; 
        shift++;
    }

    int len = strlen(a);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", a[i]);
    printf("\n");

    system("pause");
    return 0;
}