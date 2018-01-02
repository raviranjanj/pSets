/*	pattern4.c
*
*	Enter a number to print the pattern : 5
*	5
*	5 4
*	5 4 3
*	5 4 3 2
*	5 4 3 2 1
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
		column = num;
		while (column > num-row)
			printf("%d ", column--);
		printf("\n");
		row++;
	}
	return 0;
}
