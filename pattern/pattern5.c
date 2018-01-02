/*	pattern5.c
*
*	Enter a number to print the pattern : 6
*	1
*	1 *
*	1 * 3
*	1 * 3 *
*	1 * 3 * 5
*	1 * 3 * 5 *
*/

#include <stdio.h>
int main()
{
	int num, row, column;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	row = 1;
	while (row <= num) 
	{
		column = 1;
		while (column <= row) 
		{
			if (column%2 == 0)
				printf("* ");
			else
				printf("%d ",column);
			column++;
		}
		printf("\n");
		row++;
	}
	return 0;
}
