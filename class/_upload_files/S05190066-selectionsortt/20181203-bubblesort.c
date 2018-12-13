#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define LEN 32

void printr(int *data, int n)
{
	int i;
	printf("\nsorting... ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
}

void bubblesort(int *data, int n)
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    printr(data, n);
    }
}

int main(void)
{
    int i, n;
	int data[LEN];
 	srand(time(NULL));
    printf("how many number you want to generate: ");
    scanf("%d", &n);
    
	printf("your random array is: ");
 	for (i = 0; i < n; i++)
 	{
 		data[i] = (rand() % 100) + 1;
		printf("%d ", data[i]);
	}

    bubblesort(data, n);

    printf("\n\nsort complete! ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    system("pause");
}
