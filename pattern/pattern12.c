/*	pattern12.c
*
*	Enter a number to print the pattern : 6
*	1 
*	2 7 
*	3 8 12 
*	4 9 13 16 
*	5 10 14 17 19 
*	6 11 15 18 20 21
*
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d",&num);
	
	for (int row = 1; row <= num; row++) 
	{
		for (int column = 1, print_num = row; column <= row; column++)
		{
			printf("%d ", print_num);
			print_num += (num - column);
		}
		printf("\n");
	}
	return 0;
}
