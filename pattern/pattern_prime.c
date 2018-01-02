/*	pattern-prime.c
*
*	Enter a number to print the pattern : 5
*	23 19 17 13 11  7  5  3  2 
*		  17 13 11  7  5  3  2 
*		        11  7  5  3  2 
*		               5  3  2 
*		                     2
*
*/

#include <stdio.h>
int main ()
{
	int num;
	printf("Enter a number to print the pattern : ");
	scanf("%d", &num);

	int arr_prime[2*num-1];
	
	for (int i = 1, curr_no = 2, flag = 0; i <= 2*num -1; curr_no++)
	{
		flag = 0;
		for(int check = 2; check <= curr_no/2; check++)
			if (curr_no % check == 0)
			{
				flag += 1;
				break;
			}
		
		if (flag == 0)
			arr_prime[i++] = curr_no;
	}
	
	for (int row = 0; row < num; ++row)
	{
	
		for (int space = 1; space <= 2*row; space ++)
			printf("   ");
	
		for (int column = 2*(num - row)-1; column > 0; --column)
			printf("%2d ", arr_prime[column]);
		
		printf("\n");
	}
	return 0;
}

