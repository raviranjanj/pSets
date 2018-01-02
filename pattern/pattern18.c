/*	pattern18.c
*
*	Enter a number to print the pattern : 5
*	1 * * * * * * * * 1 
*	1 2 * * * * * * 2 1 
*	1 2 3 * * * * 3 2 1 
*	1 2 3 4 * * 4 3 2 1 
*	1 2 3 4 5 5 4 3 2 1 
*	
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	for (int row = 1; row <= num; row++)
	{
		for (int first_column = 1; first_column <= row; first_column++)
			printf("%d ", first_column);
		for (int mid_column = 2*(num-row); mid_column >= 1; mid_column--)
			printf("* ");
		for (int last_column = row; last_column >= 1; last_column--)
			printf("%d ", last_column);
		printf("\n");
	}
	return 0;
}
