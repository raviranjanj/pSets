/*	fibonacci_upto_max_odd.c
*
*	Fibonacci Sequence upto given number &
*	Maximum odd Fibonacci number upto given number.
*/

#include <stdio.h>

int main()
{
	int last_num;
	
	printf("Enter Last Number : ");
	scanf("%d", &last_num);
	
	if (last_num < 0)
		return printf("Wrong Input\n");
		
	int value, first = 0, second = 1;
	
	printf("%d %d ", first, second);

	for (int next = 1; next <= last_num; )
	{
		next = first + second;
		first = second;
		second = next;
		
		if (next <= last_num)
		{
			printf("%d ", next);
			if (next %2 != 0)
				value = next;
		}
	}
	printf("\nHighest odd in the range : %d\n", value);

	return 0;
}
