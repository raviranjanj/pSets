/*	perfect_no.c
*
*	Count perfect numbers upto a given range.
*/

#include <stdio.h>
int main()
{
	int given_num;
	printf("Enter a number to find out the perfect no upto that number : ");
	scanf("%d", &given_num);
	
	for (int print_num = 1, sum = 0; print_num <= given_num; print_num++, sum = 0)
	{
		//  Calculating a number is perfect or not.
		
		for (int i = 1; i <= print_num/2; i++)
			if (print_num % i == 0)
				sum += i;
				
		//  Printing the perfect numbers.
		
		if (sum == print_num)
			printf("%d ", print_num);
	}
	return 0;
}
