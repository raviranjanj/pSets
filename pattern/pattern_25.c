/*	pattern_25.c
*
*	1
*	2 2
*	3 3 3
*	4 4 4 4
*	3 3 3
*	2 2
*	1
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for (int row = 1, last = 1; row <= 2*num -1; row++)
	{
		for (int column=1; column <= last; column++)
		{
			if (row < num)
				printf("%d ", last);
			else
				printf("%d ", last);
		}
		if (row < num)
			last++;
		else
			last--;
		printf("\n");
	}
	return 0;
} 
