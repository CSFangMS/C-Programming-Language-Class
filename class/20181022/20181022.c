#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int com, input, round;
	int min, max;

//decide min n max
	printf("Please emter Max and Min value,\n");
	printf("Max = ");
	scanf("%d", &max);
	printf("Min = ");
	scanf("%d", &min);
	
//rand
	srand(time(NULL));
	com = (rand() % max) + min;
	printf("cheat enable: ans = %d\n", com);
	
//answer loops
	for(round = 1;round < 6;round++){
		printf("round %d, guess %d - %d: ", round, min, max);
		scanf("%d", &input);
		
		if(input == com){
			printf("Correct! You spend %d rounds to finish.\n\n", round);
			break;
		}
		if(input > com){
			max = input;
			printf("Smaller!\n");
		}
		if(input < com){
			min = input;
			printf("Bigger!\n");
		}
	}

//gameover
	if(round == 6){
		printf("Game Over, the answer is %d.\n\n", com);
	}
	system("pause");
	return 0;
}
