/*	arr_sum_non_prime.c
*
*	Sum of all non prime integers in an array.
*		given : continuous digits should be counted as numbers.
*/

#include <stdio.h>

int ascii_to_num(int n)
{
	int count = 0;
	for (int i = 48; i <= 57; i++, count++)
		if (n == i)
			return count;
}

int prime_check(int num)
{
	if (num <= 1)
		return 0;
	
	int count = 0;
	for (int i = 2; i <= num/2; i++)
		if (num % i == 0)
		{
			count += 1;
			break;
		}
	
	if (count == 0)
		return 1;
	else
		return 0;
}

int main(void) 
{
	char arr[30];
	scanf("%s", arr);

	int sum = 0;
	
	for (int i = 0, num = 0; arr[i] != '\0'; i++)
		if (arr[i]>='0' && arr[i]<='9')
		{
			while (arr[i]>='0' && arr[i]<='9' && arr[i] != '\0')
				num = num*10 + ascii_to_num(arr[i++]);

			i -= 1;
			if (!prime_check(num))
				sum += num;
			num = 0;
		}

	printf("%d", sum);
	
	return 0;
}
