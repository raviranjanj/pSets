/*  pattern13.c
*
*	Enter a number to print the pattern : 5
*	0
*	1 1
*	2 3 5
*	8 13 21 34
*	55 89 144 233 377
*
*/

#include <stdio.h>

int main()
{
	int num;
	long value1, value2, print_num = 1;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	value1 = value2 = 0;
	for (int row = 1; row <= num; row++)
	{
		for (int column = 1; column <= row; column++)
			if (row == 1)
				printf("%ld", value2);
			else {
				printf("%ld ", print_num);
				value2 = value1;
				value1 = print_num;
				print_num = value1 + value2;
			}
		printf("\n");
	}
	return 0;
}
