#include <stdio.h>
int factorial(int);
int collatz(int);
int main()
{
	int num;
	printf("Enter any no. to calculate the Factorial : ");
	scanf("%d",&num);
	printf("the no is : %d\n", fibonacci(num));

	printf("Enter any no. to calculate Collatz Conjecture Count : ");
	scanf("%d",&num);
	
	printf("the count is : %d\n", collatz(num));
	return 0;
}

int factorial(int n)
{
	if (n==1)
		return 1;
	else
		return n*factorial(n-1);
	return n;
}

int collatz(int n)
{
	if (n==1)
		return 0;
	else if (n%2==0)
		return 1 + collatz(n/2);
	else
		return 1 + collatz(3*n+1);
	return n;
}
