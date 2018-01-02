#include <stdio.h>

int factors(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
		{
			printf("%d ", i);
			count++;
		}
	return count;
}

int hcf_find(int a, int b)
{
	if (a == 0)
		return b;
	else
		return hcf_find(b%a, a);
}

int main(void)
{
	int num1,num2;
	printf("Enter num-1 : ");
	scanf("%d", &num1);
	printf("Enter num-2 : ");
	scanf("%d", &num2);

	printf("factors : ");
	printf("\nTotal factors : %d\n", factors(num1));

	printf("factors : ");
	printf("\nTotal factors : %d\n", factors(num2));
	
	printf("hcf = %d\n", hcf_find(num1, num2));

	return 0;
}
