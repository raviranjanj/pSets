/*	pattern_23.c
*	
*	1
*	3 * 2
*	4 * 5 * 6
*	10 * 9 * 8 *7
*	11 * 12 * 13 * 14 * 15
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);

	for (int row = 1, last = 0; row <= num; row++)
	{
		if (row %2 !=0)
		{
			last += row;
			for(int column = 1; column <= 2*row -1; column++)
			{
				if(column %2 == 0)
					printf("* ");
				else
					printf("%d ",last++);
			}
		}
		else
		{
			last += row-1;
			for (int column =1; column <= 2*row-1; column++)
			{
				if(column %2 == 0)
					printf("* ");
				else
					printf("%d ",last--);
			}
		}
		printf("\n");
	}
	return 0;
}
