/*	pattern 24.c
*
*	Enter a number to print the pattern : 3
*	1 1 1 2
*	3 2 2 2
* 	3 3 3 4
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number to print the pattern :");
	scanf("%d", &num);
	
	for (int row = 1; row <= num; row++)
	{
		for (int column = 0; column <= num; column++)
			if (row %2 != 0)
			{
				if (column == num)
					printf("%d ", row +1);
				else
					printf("%d ", row);
			}
			else
			{
				if (column == 0)
					printf("%d ", row +1);
				else
					printf("%d ", row);					
			}
		printf("\n");
	}
	
	return 0;
}
