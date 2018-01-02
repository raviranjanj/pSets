/*	pattern2.c
*
*	Enter a number to print the pattern : 5
*	5 4 3 2 1
*	4 3 2 1
*	3 2 1
*	2 1
*	1
*/

#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);
	
	for (int i = num; i >= 1; i--) 
	{
		for (int j = i; j >= 1; j--)
			printf("%d ", j);
		printf("\n");
	}
	return 0;
}
