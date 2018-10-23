#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int input = 0;
int a = 1;
int b = 1;
int c = 1;
int count = 0;

int main(){
    scanf("%d", &input);
    input += 1;

    while(a < input){
        printf("%d,%d,%d\n", a, b, c);
        if(c < (input - 1)){
            c++;
            count++;
            continue;
        }
        if(b < (input - 1)){
            c = 1;
            b++;
            count++;
            continue;
        }
        if(a < input){
            b = 1;
            c = 1;
            a++;
            count++;
            continue;
        }
    }

    printf("Á`¼Æ¡G%d²Õ\n", count);
    //for(int i=0;i <= input;i++){}

    system("pause");
    return 0;
}
