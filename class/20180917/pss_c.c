#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int Scissors = 1;
    int Rock = 2;
    int Paper = 3;
    int i = 0;
    int player = 0;
    int com = 0;
    int Pscore = 0;
    int Cscore = 0;
    srand(time(NULL));
    printf("���U�ӻP�q���i��5�����q������\n");
//�����w��
    for(i = 0;i < 5;i++){
        printf("�п�J1-3���Ʀr:1=�ŤM�B2=���Y�B3=��\n");
        scanf("%d", &player);
            int computer = rand()%3+1;
            if(player == 1){
                if(computer == 1){
                    printf("�A�X�ŤM�B�q���]�X�ŤM�A����!\n\n");
                }
                if(computer == 2){
                    printf("�A�X�ŤM�B�q���X���Y�A�A��F!\n\n");
                    Cscore = Cscore + 1;
                }
                if(computer == 3){
                    printf("�A�X�ŤM�B�q���X���A�AĹ�F!\n\n");
                    Pscore = Pscore + 1;
                }
            }
            else  if(player == 2){
              	if(computer == 1){
                    printf("�A�X���Y�B�q���X�ŤM�A�AĹ�F!\n\n");
                    Pscore = Pscore + 1;
                }
                if(computer == 2){
                    printf("�A�X���Y�B�q���]�X���Y�A����!\n\n");
                }
                if(computer == 3){
                    printf("�A�X���Y�B�q���X���A�A��F!\n\n");
                    Cscore = Cscore + 1;
                }
            }
        	else if(player == 3){
                if(computer == 1){
            	    printf("�A�X���B�q���X�ŤM�A�A��F!\n\n");
                    Cscore = Cscore + 1;
                }
            	if(computer == 2){
                    printf("�A�X���B�q���X���Y�A�AĹ�F!\n\n");
                    Pscore = Pscore + 1;
                }
       			if(computer == 3){
                    printf("�A�X���B�q���]�X���A����!\n\n");
                }
            }
       	    else{
                printf("��J���~\n");
                break;
            }
        }
//����e�� 
    if(Cscore > Pscore){
        printf("\n�q��Ĺ�F�A��ƬO %d �� %d !\n\n",Cscore,Pscore);
    }
    else if(Cscore < Pscore){
        printf("\n�AĹ�F�A��ƬO %d �� %d !\n\n",Pscore,Cscore);
    }
    else if(Cscore = Pscore){
        printf("\n���襭��!\n\n");
    }
    system("pause");
    return 0;
}
