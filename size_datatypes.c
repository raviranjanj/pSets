#include <stdio.h>
int main()
{
	printf("int = %d\n"
			"float = %d\n"
			"long = %d\n"
			"double = %d\n"
			"long double = %d\n", sizeof(int), sizeof(float), sizeof(long), 
			sizeof(double), sizeof(long double));
	return 0;
}
