#include <stdio.h>

int main(int argc, char *argv[]){
    int a, b;
    printf("�п�Ja�Pb���ƭ�\n");
    scanf("%d %d", &a, &b);
    
    printf("a and b : %d\n", a && b);
    printf("a or b : %d\n", a || b);
    
    //XOR is not like this
	printf("a xor b : %d\n", a || b,a != b);
	//XOR
    printf("not a and not b : %d\n",~a && ~b);
    printf("a not b : %d\n", a != b);
    printf("a xor b : %d\n", a ^ b);
    system("pause");
    return 0;
} 
