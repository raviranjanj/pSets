/*	pattern_26.c
*
*	3
*	4 4
*	5 5 5
*	6 6 6 6
*	6 6 6 6
*	5 5 5
*	4 4
*	3
*/

#include <stdio.h>
int main()
{
	int num, start;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Enter a starting number : ");
	scanf("%d", &start);
	
	for (int i = 1; i <= num; i++, ++start)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d ",start);
		}
		printf("\n");
	}
	for (int i = num; i >= 1; i--)
	{
		--start;
		for (int j = 1; j <= i; j++)
		{
			printf("%d ",start);
		}
		printf("\n");
	}
	return 0;
}
