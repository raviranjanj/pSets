/*	pattern_27.c
*
*	1 * 2 * 3 * 4 * 17 * 18 * 19 * 20
*		5 * 6 * 7 * 14 * 15 * 16
*			8 * 9 * 12 * 13
*				10 * 11
*/

#include <stdio.h>
int main()
{
	int num, val = 1, extra = 0, cal;
	printf("Enter a number : ");
	scanf("%d", &num);
	
	for (int row = 0; row < num; row++)
	{
		for (int space = 0; space < 2*row; space++)
			printf("  ");
		
		for (int col = 2*(num - row); col >= 1; col--)
			(col %2 != 0) ? printf("* ") : printf("%d ", val++);

		cal = (num-row) * (num-row) + extra;		
		
		for (int col = 1, k = 1; col <= 2*(num-row) -1; col++)
			(col %2 == 0) ? printf("* ") : printf("%d ", cal + k++);
			
		extra += (num-row);
		printf("\n");
	}

	return 0;
}
