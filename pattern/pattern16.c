/*	pattern16.c
*
*	Enter a number to print the pattern : 5
*	* * * * 1 
*	* * * 1 2 1 
*	* * 1 2 3 2 1 
*	* 1 2 3 4 3 2 1 
*	1 2 3 4 5 4 3 2 1
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
		for (int star = 1; star <= num-row; star++)
			printf("* ");
		for (int mid_column = 1; mid_column <= row; mid_column++)
			printf("%d ", mid_column);
		for (int tail_column = row-1; tail_column >= 1; tail_column--)
			printf("%d ", tail_column);
		printf("\n");
	}
	return 0;
}
