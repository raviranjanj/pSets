/*
*	Prime numbers and total number of primes upto a given number.
*/

#include <stdio.h>
int main()
{
	int given_no, count = 0;
	printf("Enter a number to print the Prime no. upto given number : ");
	scanf("%d", &given_no);
	if(given_no < 2)
		return printf("Prime no. should be greater than 1\n");
		
	for (int curr_no = 2, flag; curr_no <= given_no; curr_no++)
	{
		flag = 0;
		for (int i = 2; i <= curr_no/2; i++)
			if (curr_no % i == 0)
			{
				flag = 1;
				break;
			}

		if (flag == 0)
		{
			printf("%d ", curr_no);
			count++;
		}
	}
	printf("\nTotal %d \n", count);
	return 0;
}
