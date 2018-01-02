/*	pattern22.c
*
*	Enter a number to print the pattern : 5
*	* * * * 1 
*	* * * 1 2 1 
*	* * 1 2 3 2 1 
*	* 1 2 3 4 3 2 1 
*	1 2 3 4 5 4 3 2 1 
*	* 1 2 3 4 3 2 1 
*	* * 1 2 3 2 1 
*	* * * 1 2 1 
*	* * * * 1  
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
		for (int mid_col = 1; mid_col <= row; mid_col++)
			printf("%d ", mid_col);
		for (int tail_col = row-1; tail_col >= 1; tail_col--)
			printf("%d ", tail_col);
		printf("\n");
	}
	
	for (int row = 1; row < num; row++)
	{
		for (int star = 1; star <= row; star++)
			printf("* ");
		for (int mid_col = 1; mid_col <= num-row; mid_col++)
			printf("%d ", mid_col);
		for (int tail_col = num-row-1; tail_col >= 1; tail_col--)
			printf("%d ", tail_col);
		printf("\n");
	}
	return 0;
}
