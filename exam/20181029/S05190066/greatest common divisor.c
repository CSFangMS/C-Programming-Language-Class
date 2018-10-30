// greatest common divisor and lowest common multiple
// Input:
// First line: Enter a single integer n to represent the number of positive integers to enter
// Second line: The input depends on the number of n to determine the need to enter a few positive integers,
// separated by a blank key
// Output:
// The largest common factor and the least common multiple are separated by a blank key.
// Made by Stanley Fang

// warning: This code is not completed

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0;
	int lcm = 0;
	int m, n;
	int i, j;
// input
	printf("How many number you gonna enter?\n");
	scanf("%d", &input);
	if (input <= 1)
	{
		printf("error: wrong value\n");
		system("pause");
		return 0;
	}
// array
	int a[input];
	printf("Now enter your numbers, seperate by space: \n");
	scanf("%d", &a[input]);
// loop
	m = a[0];
	for (i = 0; i < input; i++)
	{
		j = i + 1;
		n = a[j];
		//lcm = m * n;
		//lcm *= n;
		
		if (j == input)
			break;
		while (m != 0 && n != 0)
		{
			if (m > n)
				m = m % n;
			else if (n > m)
				n = n % m;
		}
		if (m == 0)
			m = n;
	}
//ans
	//lcm = all array times / m
	printf("gcd = %d\n", m);
	system("pause");
	return 0;
}
