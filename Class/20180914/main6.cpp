#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int com, player;
	
	/* ���a��J���� */ 
	printf("�п�J1-3���Ʀr�A1=�ŤM�B2=���Y�B3=��\n");
	scanf("%d", &player);
	if(player = 1)
		printf("�A�X�ŤM!\n");
	else if(player = 2)
		printf("�A�X���Y!\n");
	else if(player = 3)
		printf("�A�X��!\n");
	else
		printf("�п�J1-3���Ʀr�C");

	/* �q���H������*/
	srand(time(NULL));
	com = rand() % 3 + 1;
	printf("com = %d", com);

	/* ���a�P�q����� */
	if(com > player)
		printf("�A��F!");
	
	else if(com = player)
		printf("����!");
	
	else
		printf("�AĹ�F!");
	
	
	system("pause");
	return 0;
}
