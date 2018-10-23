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
    printf("接下來與電腦進行5輪的猜拳比賽\n");
//直接硬解
    for(i = 0;i < 5;i++){
        printf("請輸入1-3的數字:1=剪刀、2=石頭、3=布\n");
        scanf("%d", &player);
            int computer = rand()%3+1;
            if(player == 1){
                if(computer == 1){
                    printf("你出剪刀、電腦也出剪刀，平手!\n\n");
                }
                if(computer == 2){
                    printf("你出剪刀、電腦出石頭，你輸了!\n\n");
                    Cscore = Cscore + 1;
                }
                if(computer == 3){
                    printf("你出剪刀、電腦出布，你贏了!\n\n");
                    Pscore = Pscore + 1;
                }
            }
            else  if(player == 2){
              	if(computer == 1){
                    printf("你出石頭、電腦出剪刀，你贏了!\n\n");
                    Pscore = Pscore + 1;
                }
                if(computer == 2){
                    printf("你出石頭、電腦也出石頭，平手!\n\n");
                }
                if(computer == 3){
                    printf("你出石頭、電腦出布，你輸了!\n\n");
                    Cscore = Cscore + 1;
                }
            }
        	else if(player == 3){
                if(computer == 1){
            	    printf("你出布、電腦出剪刀，你輸了!\n\n");
                    Cscore = Cscore + 1;
                }
            	if(computer == 2){
                    printf("你出布、電腦出石頭，你贏了!\n\n");
                    Pscore = Pscore + 1;
                }
       			if(computer == 3){
                    printf("你出布、電腦也出布，平手!\n\n");
                }
            }
       	    else{
                printf("輸入錯誤\n");
                break;
            }
        }
//結算畫面 
    if(Cscore > Pscore){
        printf("\n電腦贏了，比數是 %d 比 %d !\n\n",Cscore,Pscore);
    }
    else if(Cscore < Pscore){
        printf("\n你贏了，比數是 %d 比 %d !\n\n",Pscore,Cscore);
    }
    else if(Cscore = Pscore){
        printf("\n雙方平手!\n\n");
    }
    system("pause");
    return 0;
}
