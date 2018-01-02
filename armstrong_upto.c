/*
	Armstrong no upto a given number.
*/

#include <stdio.h>
int main()
{
	int num;
	printf("Enter a +ve number to print the Armstrong number upto that no. : ");
	scanf("%d", &num);
	
	for (int each_no = 1, sum = 0, count = 0; each_no <= num; each_no++)
	{
		for (int i = each_no, temp; i != 0; i /= 10)
		{	
			temp = i % 10;
			sum += (temp * temp * temp);
		}
		if (sum == each_no)
			printf("%d. Armstrong number is %d\n", ++count, each_no);
		sum = 0;
	}
	return 0;
}
