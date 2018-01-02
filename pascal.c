/*	pascal.c
*
*	Program to print the Pascal triangle.
*/

#include <stdio.h>
int main()
{
	int num, value;
	printf("Enter a number to print the Pascal triangle : ");
	scanf("%d", &num);
	
	if (num < 1)
		return printf("Enter values greater than  1  !!\n");
	
	int arr[num][num];
	
	for (int row = 1; row <= num; row++)
	{
		//  Printing the space in multiples of 3.
		for (int space = (num - row)*3; space >= 1; space--)
			printf(" ");
			
		for (int column = 1; column <= row; column++)
		{ 
			if (column == 1 || column == row)
			{
				value = 1;
				arr[row][column] = value;
			}
			else
			{
				//  Getting the values from previous row. && Storing it in current row-column.
				value = arr[row-1][column] + arr[row-1][column-1];
				arr[row][column] = value;
			}
			printf("%6d", value);
		}
		printf("\n");
	}
	return 0;
}
