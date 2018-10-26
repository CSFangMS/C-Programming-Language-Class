#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int com, player;
	
	/* 玩家輸入部分 */ 
	printf("請輸入1-3的數字，1=剪刀、2=石頭、3=布\n");
	scanf("%d", &player);
	if(player = 1)
		printf("你出剪刀!\n");
	else if(player = 2)
		printf("你出石頭!\n");
	else if(player = 3)
		printf("你出布!\n");
	else
		printf("請輸入1-3的數字。");

	/* 電腦隨機部分*/
	srand(time(NULL));
	com = rand() % 3 + 1;
	printf("com = %d", com);

	/* 玩家與電腦比較 */
	if(com > player)
		printf("你輸了!");
	
	else if(com = player)
		printf("平手!");
	
	else
		printf("你贏了!");
	
	
	system("pause");
	return 0;
}
