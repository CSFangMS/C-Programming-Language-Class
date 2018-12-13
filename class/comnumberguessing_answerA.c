// not finished

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    // database
    int data[5040][4];
    int i, j, k, l, remain = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                for (l = 0; l < 10; l++)
                {
                    if (i != j && i != k && i != l && j != k && j != l && k != l)
                    {
                        data[remain][0] = i;
                        data[remain][1] = j;
                        data[remain][2] = k;
                        data[remain][3] = l;
                        remain++;
                    }
                }
            }
        }
    }
    // player input
    int input[4];
    int tempYN;
    do
    {
        memset(input, 0, 4);
        tempYN = 1;
        printf("Input your number: ");
        for (i = 0; i < 4; i++)
        {
            scanf("%d", &input[i]);
        }
        // check -1 < input < 10
        if (input[i] / 10 >= 1 || input[i] < 0)
        {
            printf("error: 10 > number > -1, please re-enter your number.\n\n");
            tempYN = 0;
        }
        // check duplicate
        if (input[0] == input[1] || input[0] == input[2] || input[0] == input[3] || input[1] == input[2] || input[1] == input[3] || input[2] == input[3])
        {
            printf("error: have duplicate, please re-enter your number.\n\n");
            tempYN = 0;
        }
    } while (tempYN == 0);
    // main algo
    int a, b, acom, bcom;
    int com, guess = 0;
    while (a < 4)
    {
        // com guessing
        com = rand() % remain; // com = 0 ~ 5039 (first try)
        guess++;
        // answer ab
        a = 0, b = 0;
        printf("your number:       %d %d %d %d.\n", input[0], input[1], input[2], input[3]);
        printf("number guessing... %d %d %d %d, remain: %d\n", data[com][0], data[com][1], data[com][2], data[com][3], remain);
        printf("A = ");
        scanf("%d", &a);
        printf("B = ");
        scanf("%d", &b);
        printf("\n");
        if (a == 4)
        {
            break;
        }
        // com vs data AB
        for (k = 0; k < remain; k++)
        {
            acom = 0, bcom = 0;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (data[com][i] == data[remain][j])
                    {
                        if (i == j)
                        {
                            acom++;
                        }
                        else
                        {
                            bcom++;
                        }
                    }
                }
            }
            // AB vs ab
            if (!((a == acom) && (b == bcom)))
            {
                for (i = k; i < remain; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        data[i][j] = data[i + 1][j];
                    }
                }
                remain--;
                k--;
            }
            if (remain == 0)
            {
                printf("remain = 0\n");
                system("pause");
                return 0;
            }
        }
    }
    printf("I got it! I've spend %d rounds.", guess);
    system("pause");
}
