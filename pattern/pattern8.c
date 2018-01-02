/*	pattern8.c
*
*	Enter a number to print the pattern : 5
*	1
*	* 2
*	1 * 3
*	* 2 * 4
*	1 * 3 * 5
*
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number to print the pattern : ");
	scanf("%d", &num);
	
	for (int row = 1; row <= num; row++) 
	{
		for (int column = 1; column <= row; column++) 
			if (row %2 == 0)
				(column %2 == 0) ? printf("%d ", column) : printf("* ");
			else
				(column %2 == 0) ? printf("* ") : printf("%d ", column) ;
		printf("\n");
	}
	return 0;
}
