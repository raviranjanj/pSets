/*	pattern6.c
*
*	Enter a number to print the pattern : 5
*	1
*	2 2
*	3 3 3
*	4 4 4 4
*	5 5 5 5 5
*
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
			printf("%d ", row);
			column++;
		}
		printf("\n");
		row++;
	}
	return 0;
}
