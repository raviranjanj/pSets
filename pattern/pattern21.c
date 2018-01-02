/*	pattern21.c
*
*	Enter a number to print the pattern : 4
*	1           1 
*	  2       2 
*		3   3 
*		  4 
*		5   5 
*	  6       6 
*	7           7 
*	
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	for(int row = 1; row <= num; row++)
	{
		for (int first_space_col = 1; first_space_col <= row-1; ++first_space_col)
			printf("  ");
		printf("%d ", row);
		for (int mid_space_col = 2*(num-row)-1; mid_space_col >= 1; --mid_space_col)
			printf("  ");
		if (!(row == num))
			printf("%d ", row) ;
		printf("\n");
	}
	
	for(int row = 1; row < num; row++)
	{
		for (int first_space_col = num-row-1; first_space_col >= 1; --first_space_col)
			printf("  ");
		printf("%d ", num+row);
		for (int mid_space_col = 1; mid_space_col <= 2*row -1; ++mid_space_col)
			printf("  ");
		printf("%d ", num+row);
		printf("\n");
	}
	return 0;
}
