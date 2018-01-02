/*	pattern_heart.c
*
*	C program to print the heart (relatively).
*
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number to print the heart : ");
	scanf("%d", &num);
	printf("\n");
	
	for (int row = 1, half = num/2; row <= half; row += 2)
	{
		for (int space = half - row; space >= 1; space -= 2)
			printf(" ");
		for (int star = 1; star <= num - (half-row) -1; star++)
			printf("*");
		for (int space = 2*(half -row) +1; space >= 1; space -= 2)
			printf(" ");
		for (int star = 1; star <= num - (half-row) -1; star++)
			printf("*");
		printf("\n");
	}
	
	for (int row = 0; row < num; row++)
	{
		for (int space = 1; space <= row; space++)
			printf(" ");
		for(int star = 2*(num-row) -1; star >= 1; star--)
			printf("*");
		printf("\n");
	}
	return 0;
}
