// finish
// 20181203
// 
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

void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void selectionsort(int *data, int n)
{
    int i, j, min;
    for (i = 0; i < n-1; i++) 
    { 
        min = i; 
        for (j = i + 1; j < n; j++)
        {
        	if (data[j] < data[min])
			{
            	min = j;
            }
        }
        swap(&data[min], &data[i]); 
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

    selectionsort(data, n);

    printf("\n\nsort complete! ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    system("pause");
}
