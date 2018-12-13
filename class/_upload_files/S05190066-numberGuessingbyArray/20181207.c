#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// total number guessing, will determine default rounds too
#define LEN 3

// rounds
int roundsinput(int rounds)
{
	char buffer[16];
	printf("Greetings! This is a number guessing game, You'll have to guess %d number at once, \n", LEN);
	printf("if you have guessed the correct number and right places, you get an A, \n");
	printf("but if you only guessed the number but with wrong places, you get a B.\n");
	printf("how many rounds you want to play? leave blank for default %d rounds.\n", rounds);
	if (*fgets(buffer, sizeof(buffer), stdin) != '\n')
	{
		rounds = atol(buffer);
	}
	printf("You only have %d rounds to guessed it, so be thoughtful!\n", rounds);
	return rounds;
}

// check com have duplicates or not
int randcheck(int com[])
{
	int i, j;
	for (i = 0; i < LEN; i++)
	{
		for (j = i + 1; j < LEN; j++)
		{
			if (com[i] == com[j])
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
}

// com random value
void comrand(int com[])
{
	srand(time(NULL));
	int i;
	do
	{
		for (i = 0; i < LEN; i++)
		{
			com[i] = rand() % 100;
		}
	} while (randcheck(com) == 1);
}

// print comrand value
void comcheat(int com[])
{
	int i;
	for (i = 0; i < LEN; i++)
	{
		printf("%d ", com[i]);
	}
	printf("\n\n");
}

void userinput(int input[])
{
	// yes no question
	input[LEN] = {0};
	int tempYN = 1;
	do
	{
		printf("please guess your number: ");
		int i, j;
		for (i = 0; i < LEN; i++)
		{
			scanf("%d", &input[i]);
			
			// check > 99
			if (input[i] / 100 >= 1 || input[i] < 0)
			{
				printf("error: 100 > number >= 0, please re-enter your number.\n\n");
				//i--;
				tempYN = 0;
				goto hell;
			}
			
			// check duplicate
			for (j = 0; j < i; j++)
			{
				if (input[i] == input[j])
				{
					printf("error: could not use the same number! please try again.\n\n");
					//i--;
					tempYN = 0;
					goto hell;
				}
			}
		}
		// print input
		printf("\nYour number is ");
		for (i = 0; i < LEN; i++)
		{
			printf("%d ", input[i]);
		}
		printf("\n");
		//printf(", enter 1 to proceed, or 0 to re-enter the number ");
		//scanf("%d", &tempYN);
		hell:;
	} 
	while (tempYN == 0);
}

int compareA(int com[], int input[], int a)
{
	int i;
	for (i = 0; i < LEN; i++)
	{
		if (com[i] == input[i])
		{
			++a;
		}
	}
	//printf("%dA\n", a);
	return a;
}

int compareB(int com[], int input[], int a, int b)
{
	int i, j;
	for (i = 0; i < LEN; i++)
	{
		for (j = 0; j < LEN; j++)
		{
			if (com[i] == input[j])
			{
				++b;
			}
		}
	}
	b -= a;
	//printf("%dB\n", b);
	return b;
}

int main(void)
{
	int com[LEN] = {0};
	int input[LEN] = {0};
	int check = 0, rounds = LEN + 2;
	int a = 0, b = 0;
	comrand(com);
	comcheat(com);

	rounds = roundsinput(rounds);
	int i;
	for(i = 1;i < rounds + 1; i++)
	{
        printf("\n*Round %d*\n", i);
        a = 0;
        b = 0;
		userinput(input);
		a = compareA(com, input, a);
		b = compareB(com, input, a, b);
		if (a == LEN)
		{
            printf("Correct Answer! You beat it!\n");
            system("pause");
            return 0;
		}
		printf("you get %dA%dB\n", a, b);
	}

	// gameover
	if(i = rounds + 1)
    {
        printf("Game Over, you run out of rounds!\n");
        printf("The answer is ");
		comcheat(com);
		printf("Better luck next time!\n");
		system("pause");
		return 0;
    }
	printf("you shouldn't be here, please check the code, it may have exception.\n");
	system("pause");
}
