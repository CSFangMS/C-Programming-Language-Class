#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int a, b, c, i, input, count;
	printf("�п�J�ƦC���Ӽ�:");
	scanf("%d", &input);
	
	for(i = 0;i < input;i++){
		for(a = 1; a <= input;a++){
			printf("%d,", a);
			if(a == input){
				printf("\n");
				count++;
			} 
		}
	}
	
	
	/*for(a = 1;a <= input;a++){
		for(b = 1;b <= input;b++){
			for(c = 1;c <= input;c++){
				if(a != b && b != c && a != c){
					printf("%d,%d,%d\n", a, b, c);
					count++;
				}
			}
		}
	}
	*/
	printf("\ncount = %d\n", count);
	system("pause");
	return 0;
}
