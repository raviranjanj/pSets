/*	pattern9.c
*
*	Enter a number to print the pattern : 6
*	*
*	* *
*	* 2 *
*	* 2 3 *
*	* 2 3 4 *
*	* * * * * *
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
			if (row == num)
				printf("* ");
			else if (column == 1 || column == row)
				printf("* ");
			else
				printf("%d ", column);
		printf("\n");
	}
	return 0;
}
