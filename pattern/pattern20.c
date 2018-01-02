/*	pattern20.c
*
*	Enter a number to print the pattern : 4
*	1           1 
*	  1       1 
*		1   1 
*		  1 
*		1   1 
*	  1       1 
*	1           1 
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
		printf("1 ");
		for (int mid_space_col = 2*(num-row)-1; mid_space_col >= 1; --mid_space_col)
			printf("  ");
		if (!(row == num))
			printf("1 ") ;
		printf("\n");
	}
	
	for(int row = 1; row < num; row++)
	{
		for (int first_space_col = num-row-1; first_space_col >= 1; --first_space_col)
			printf("  ");
		printf("1 ");
		for (int mid_space_col = 1; mid_space_col <= 2*row -1; ++mid_space_col)
			printf("  ");
		printf("1 ");
		printf("\n");
	}
	return 0;
}
