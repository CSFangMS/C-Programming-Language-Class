#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�ϥΪ̤����J���ƪ��Ʀr�Τ��O�|�Ӽ�
//�����q���|�Q�n�@�եѥ��ܥk�ƦC�n���|�ӼƽX�]�ƽX0�i�H�b�̫e���A�B�ƽX���i�H���ƥX�{�Q�ϥΡ^�A�Ҧp1847�A�����̥h�q�C
//�q�D��q���|���q�D�̴��ܡAĴ�p���̲q�F6149�A�h���ܬO1A1B�A�䤤A��ܦ��o�ӼƦr�A�B�Ʀr�O�b���T����m�A B��ܦ��o�ӼƦr�A����m����F�]���Ʀr4�Q�q��F��m�]���T�A�ӼƦr1�Q���q��F����m�����T�A�ҥH�o��1A1B�C
//�ϥΪ̲q7���A7�����S�q��Y�C������

int main()
{
    //computer random number
    int comRand1, comRand2, comRand3, comRand4;
    //player input number
    int pInput1, pInput2, pInput3, pInput4;
    //as request, A stands for right number and places, B for right number but in wrong places.
    int A = 0, B = 0;
    //for count
    int i, j;
    //temp
    int tempYN = 0;

//comRand
    srand(time(NULL));
    comRand1 = (rand() % 10);
    do
    {
        comRand2 = (rand() % 10);
    }while(comRand2 == comRand1);
    do
    {
        comRand3 = (rand() % 10);
    }while(comRand3 == comRand1 || comRand3 == comRand2);
    do
    {
        comRand4 = (rand() % 10);
    }while(comRand4 == comRand1 || comRand4 == comRand2 || comRand4 == comRand3);
    printf("cheat enable: comRand = %d%d%d%d\n", comRand1, comRand2, comRand3, comRand4);
//title
    printf("Greetings! This is a number guessing game, You'll have to guess a four digit number, \n");
    printf("if you have guessed the correct number and right places, you get an A, \n");
    printf("but if you only guessed the number but with wrong places, you get a B.\n");
    printf("You only have 7 rounds to guessed it, so be thoughtful!\n");
//Loops
    for(i = 1;i < 8;i++){
        printf("\n*Round %d*\n", i);
        A = 0;
        B = 0;
    //player input loops
        while(tempYN == 0)
        {
            printf("\nPlease enter your 4 digit number, these numbers should not repeat itself.\n");
            printf("First digit of your number: ");
            scanf("%d", &pInput1);
            if(pInput1 / 10 > 0)
            {
                printf("error: Please enter digit number only.\n");
                continue;
            }
            printf("\nSecond digit of your number: ");
            scanf("%d", &pInput2);
            if(pInput2 / 10 > 0)
            {
                printf("error: Please enter digit number only.\n");
                continue;
            }
            if(pInput2 == pInput1)
            {
                printf("error: could not use the same number! please try again.\n");
                continue;
            }
            printf("\nThird digit of your number: ");
            scanf("%d", &pInput3);
            if(pInput3 / 10 > 0)
            {
                printf("error: Please enter digit number only.\n");
                continue;
            }
            if(pInput3 == pInput1 || pInput3 == pInput2)
            {
                printf("error: could not use the same number! please try again.\n");
                continue;
            }
            printf("\nForth digit of your number: ");
            scanf("%d", &pInput4);
            if(pInput4 / 10 > 0)
            {
                printf("error: Please enter digit number only.\n");
                continue;
            }
            if(pInput4 == pInput1 || pInput4 == pInput2 || pInput4 == pInput1)
            {
                printf("error: could not use the same number! please try again.\n");
                continue;
            }
            printf("\nYour number is %d%d%d%d, enter 1 to proceed, or 0 to re-enter the number\n", pInput1, pInput2, pInput3, pInput4);
            scanf("%d", &tempYN);
        }
    //A calc
        if(pInput1 == comRand1)
        {
            A += 1;
        }
        if(pInput2 == comRand2)
        {
            A += 1;
        }
        if(pInput3 == comRand3)
        {
            A += 1;
        }
        if(pInput4 == comRand4)
        {
            A += 1;
        }
    //B calc
        if(pInput1 == comRand2 || pInput1 == comRand3 || pInput1 == comRand4)
        {
            B = 1;
        }
        if(pInput2 == comRand1 || pInput2 == comRand3 || pInput2 == comRand4)
        {
            B += 1;
        }
        if(pInput3 == comRand1 || pInput3 == comRand2 || pInput3 == comRand4)
        {
            B += 1;
        }
        if(pInput4 == comRand1 || pInput4 == comRand2 || pInput4 == comRand3)
        {
            B += 1;
        }
    //victory
        if(A == 4)
        {
            printf("Correct Answer! You beat it!\n");
            system("pause");
            return 0;
        }
        tempYN = 0;
        printf("\n%dA%dB, please try again.\n", A, B);
    }
//gameover
    if(i = 8)
    {
        printf("Game Over, you run out of rounds!\n");
        printf("The answer is %d%d%d%d, better luck next time!\n", comRand1, comRand2, comRand3, comRand4);
        system("pause");
        return 0;
    }
    system("pause");
    return 0;
}