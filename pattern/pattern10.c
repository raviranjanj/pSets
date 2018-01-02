/*	pattern10.c
*
*	Enter a number to print the pattern : 5
*	1 
*	0 1 
*	1 0 1 
*	0 1 0 1 
*	1 0 1 0 1
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
		for (int column = 1; column <= row; column++)
			if (row %2 == 0)
				(column %2 == 0) ? printf("1 ") : printf("0 ") ;
			else
				(column %2 == 0) ? printf("0 ") : printf("1 ") ;
		printf("\n");
	}
	return 0;
}

