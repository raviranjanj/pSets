#include <stdio.h>
#include <string.h>
int main()
{
	int count = 0;
	char arr[] = "minimummmmuuunnmm";
	int n = strlen(arr);

	for (int i = 0, check = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			if (arr[j] == arr[i])
			{
				check = 0;		
				break;
			}
		
		if(check)
			for (int j = i+1; j < n; j++)
				if (arr[i] == arr[j])
					count += 1;
		check = 1;
	}
	printf("%d\n", count);
	return 0;
}
