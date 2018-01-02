/*	pattern11.c
*
*	Enter a number to print the pattern : 5
*	1 
*	2 3 
*	4 5 6 
*	7 8 9 10 
*	11 12 13 14 15
*
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	for (int row = 1, print_number = 1; row <= num; row++)
	{
		for(int column = 1; column <= row; column++, print_number++)
			printf("%d ", print_number);
		printf("\n");
	}
	return 0;
}
