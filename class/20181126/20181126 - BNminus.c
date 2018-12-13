#include<stdio.h>
#include<string.h>
#define LEN 64

int compare(char *str_a,char *str_b)
{
    int len_a, len_b;
    len_a = strlen(str_a);
    len_b = strlen(str_b);
 
    if (strcmp(str_a, str_b) == 0)
        return 0;
    if (len_a > len_b)
        return 1;
    else if(len_a == len_b)
        return strcmp(str_a, str_b);
    else
        return -1;
}
 
int main()
{
    int f, n;
    int i, k, len_a, len_b;
    char str_a[LEN], str_b[LEN];
    int num_a[LEN] = {0};
    int num_b[LEN] = {0};
    int num_c[LEN];
 
    while (scanf("%s%s", str_a, str_b) != EOF)
    {
        len_a = strlen(str_a);
        len_b = strlen(str_b);
 
        k = (len_a > len_b) ? len_a : len_b; 
        num_c[0] = 0;
        f = 0;
        n = compare(str_a,str_b);
 
        for (i = 0; i < len_a; i++)
            num_a[i] = str_a[len_a - i - 1] - '0';
        for (i = 0; i < len_b; i++)
            num_b[i] = str_b[len_b - i - 1] - '0';
 
        for (i = 0; i < k; i++)
        {
            if (n >= 0)
            {
                if (num_a[i] >= num_b[i])
                    num_c[i] = num_a[i] - num_b[i];
                else
                {
                    num_c[i] = num_a[i] - num_b[i] + 10;
                    num_a[i + 1]--;
                }
            }
            else
            {
                if (num_b[i] >= num_a[i])
                    num_c[i] = num_b[i] - num_a[i];
                else
                {
                    num_c[i] = num_b[i] - num_a[i] + 10;
                    num_b[i + 1]--;
                }
            }
 
        }
 
        if (n < 0)
            printf("-");
        for (i = k - 1; i >= 0; i--)
        {
            if (num_c[i])
                f = 1;
            if (f || i == 0 )
                printf("%d",num_c[i]);
        }
        printf("\n");
        //clean
        for (i = 0; i < k; i++)
        {
            num_a[i] = 0;
            num_b[i] = 0;
        }
    }
 	
    return 0;
}
 

