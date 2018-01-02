/*	pattern15.c
*
*	Enter a number to print the pattern : 6
*	6 5 4 3 2 1 
*	* 6 5 4 3 2 
*	* * 6 5 4 3 
*	* * * 6 5 4 
*	* * * * 6 5 
*	* * * * * 6
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
		for (int star = 1; star <= row-1; star++)
			printf("* ");
		for (int column = num; column-row >= 0; column--)
			printf("%d ", column);
		printf("\n");
	}
	return 0;
}
