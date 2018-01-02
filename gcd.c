#include <stdio.h>
#include<stdlib.h>
int stringlen(int arr[])
{
	int count = 0;
	for(int i = 0; i != '\0'; i++)
	{
		count ++;
	}
	return count;
}

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

int generalizedGCD(int *arr, int len)
{
	int res = arr[0];
	for (int i=1;i<len;i++)
	{
		res = gcd(arr[i], res);
	}
	
	return res;
}

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	int len = stringlen(arr);
	
	printf("gcd = %d", generalizedGCD(arr, len));
	
}
