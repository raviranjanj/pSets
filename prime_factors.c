/*	prime_factors.c
*
*	Program to find the prime factors of the given number.
*/

#include <stdio.h>
int prime_check(int n)
{
	int count = 0;
	for (int i = 2; i <= n/2; ++i)
		if (n % i == 0)
		{
			count += 1;
			break;
		}
	
	if (count == 0)
		return 1;
	else
		return 0;
}

void prime_factors(int num)
{
	int i = 2;
	printf("Prime Factors are : ");

	if (num % i == 0)
		printf("%d ", i);	
	
	for (i += 1; i <= num/2; i += 2)
		if (num % i == 0 && prime_check(i))
			printf("%d ", i);
			
	printf("\n");
}

int main(void)
{
	int num;
	printf("Enter a number to find the prime factors : ");
	scanf("%d", &num);
	
	if (num < 2 || num > 32767)
		return printf("Number not in range (2 - 32767)\n");
	
	prime_factors(num);
	
	return 0;
}
