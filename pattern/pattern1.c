/*	pattern1.c
*
*	Enter a number to print the pattern : 5
*	1
*	1 2
*	1 2 3
*	1 2 3 4
*	1 2 3 4 5
*
*/

#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d",&num);
	
	for (int i = 1; i <= num; i++) 
	{
		for (int j = 1; j <= i; j++)
			printf("%d ",j);
		printf("\n");
	}
	return 0;
}
