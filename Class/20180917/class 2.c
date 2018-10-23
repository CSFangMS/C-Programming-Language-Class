#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("請輸入原始成績\n");
    int grade;
    scanf("%d", &grade);
    if(grade>=0 && 59>=grade){
        printf("E");
    }
    if(grade >= 60 && 69 >= grade){
        printf("D");
    }
    if(grade >= 70 && 79 >= grade){
        printf("C");
    }
    if(grade >= 80 && 89 >= grade){
        printf("B");
    }
    if(grade >= 90){
        printf("A");
    }
//not using and
    if(grade >= 0){
        if(grade >= 59){
            if (grade >= 69){
                if (grade >= 79){
                    if (grade >= 89){
                        printf("a");
                    }
                }
            }
        }
    }
    if(grade >= 0){
        if(grade >= 59){
            if (grade >= 69){
                if (grade >= 79){
                    printf("b");
                }
            }
        }
    }
    if(grade >= 0){
        if(grade >= 59){
            if (grade >= 69){
                printf("c");
            }
        }
    }
    if(grade >= 0){
        if(grade >= 59){
            printf("d");
        }
    }
    system("pause");
    return 0;
} 
