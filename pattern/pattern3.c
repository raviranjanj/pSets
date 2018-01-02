/*	pattern3.c
*
*	Enter a number to print the pattern : 5
*	1 2 3 4 5
*	2 3 4 5
*	3 4 5
*	4 5
*	5
*
*/

#include<stdio.h>
int main(void)
{
	int num, row, column;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	row = 1;
	while (row <= num) 
	{
		column = row;
		while (column <= num) 
			printf("%d ", column++);
		printf("\n");
		row++;
	}
	return 0;
}
