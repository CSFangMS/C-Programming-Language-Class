// 如果军队的总人数在10—100之间则输出军队的总人数，否则输出 No answer。
// 10-100 solder, count by 3, 5, 7 number
# include<stdio.h>

int main(void)
{
	//n = solder; abc = remainder
	int n, a, b, c;
	
	printf("Please enter the remainder of the counts, seperate by space: ");
	scanf("%d %d %d", &a, &b, &c);
	
	for(n = 10; n <= 200; n++)
	{
		if (n % 3 == a && n % 5 == b && n % 7 == c)
		{
			if(n <= 100)
			{
				printf("\nTotel %d solder\n",n);
				break;
			}
			else
			{
				printf("\nNo answer\n");
			}
		}
	}
}
