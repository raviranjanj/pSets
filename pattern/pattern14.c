/*	 pattern14.c
*
*	 Enter a number to print the pattern : 6
*	 * * * * * 6
*	 * * * * 5 6
*	 * * * 4 5 6
*	 * * 3 4 5 6
*	 * 2 3 4 5 6
*	 1 2 3 4 5 6
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
		for (int star = 1; star <= num - row; star++)
			printf("* ");
		for (int column = 1, print_num = num - row +1; column <= row; column++, print_num++)
			printf("%d ", print_num);
		printf("\n");
	}
	return 0;
}
