/*	 pattern.c
*
*	Enter a number to print the pattern : 5
*		    * 
*		  * * * 
*		* * * * * 
*	  * * * * * * * 
*	* * * * * * * * * 
*	  * * * * * * * 
*		* * * * * 
*		  * * * 
*		    * 
*
*/

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	//  Upper-Half stars.
	for (int row = 1; row <= num; row++) 
	{
		for (int space = 1; space <= num-row; ++space)
			printf("  ");
		for (int column = 1; column <= 2*row -1; column++)
			printf("* ");
		printf("\n");
	}
	
	// Lower-Half stars.
	for (int row = 1; row < num; row++)
	{
		for (int space = 1; space <= row; ++space)
			printf("  ");
		for (int column = 2*(num-row) -1; column >= 1; column--)
			printf("* ");
		printf("\n");
	}
	return 0;
}
