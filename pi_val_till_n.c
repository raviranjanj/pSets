/*	pi_val_till_n.c
*
*	Program to find the PI value upto given decimal digits.
*/

#include <stdio.h>
#include <math.h>
#define MAX 18

int main(void)
{
	int num;
	printf("Enter a number to print PI value : ");
	scanf("%d", &num);
	
	if (num < 1)
		return printf("Please Enter Integer number greater than 0\n");
	else if (num > MAX)
		num = MAX;
	
	double PI_VALUE = 0.0;
	
	//	Bailey–Borwein–Plouffe formula.
	for (int i = 0; i <= num; ++i)
		PI_VALUE += ((pow(16, -i))) * (((4.0 / (8 * i + 1))) -((2.0 / (8 * i + 4))) - ((1.0 / (8 * i + 5))) - ((1.0 / (8 * i + 6))));
		
		printf("Pi value = %.*f\n", num, PI_VALUE);
    return 0;
}
