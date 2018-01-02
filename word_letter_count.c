/*	word_letter_count.c
*
*	Count duplicate words,
*	Calculate duplicate letters count,
*	Print word containing most no. of duplicate letters. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*	To store the words of the strings and how many times they have appeared. */
struct word_n_count
{
	char word[10];
	int times;
	int dup_count;
} dup[20];

int main()
{
	char arr[70], each_word[10];
	int k = 0;

	printf("Enter a line : ");
	gets(arr);

	for (int i = 0, j, check = 1, n = strlen(arr); i < n ; i++)
	{
		j = 0;
		
		/*	Storing string word in each word. */
		while (i < n && arr[i] != ' ')
			each_word[j++] = arr[i++];
		
		if (j != 0)
		{
			each_word[j] = '\0';
		
			/*	Check if word is already in struct array. */
			for (int c = 0; c < k; c++)
				if (strcmp(dup[c].word, each_word) == 0)
				{
					dup[c].times += 1;
					check = 0;
				}
			//	If not present, Placing the the word in the structure array.
			if(check)
			{
				strcpy(dup[k].word, each_word);
				dup[k++].times += 1;
			}
			
			check = 1;
			//j = 0;
		}
	}
	
	//	Count the duplicate character in the each word of structure.
	for (int struct_index = 0, n; struct_index < k; struct_index++)
	{
		n = strlen(dup[struct_index].word);
		for (int i = 0, check = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
				if (dup[struct_index].word[j] == dup[struct_index].word[i])
				{
					check = 0;
					break;
				}
			
			if(check)
				for (int j = i+1; j < n; j++)
					if (dup[struct_index].word[i] == dup[struct_index].word[j])
						dup[struct_index].dup_count += 1;
			check = 1;
		}
	}
	
	//	index will store the max duplicate letter containing word's Index.	
	int index, max = dup[0].dup_count;

	//	checking and printing the words with duplicate words and the letters count.	
	for (int i = 0; i < k; i++)
	{
		printf("%s \t %d \t%d dup-chars\n----------\n", dup[i].word, dup[i].times, dup[i].dup_count);
		if(dup[i].dup_count > max)
		{
			max = dup[i].dup_count;
			index = i;
		}
	}
	printf(":Most duplicate letters in := %s\n", dup[index].word);
	
	return 0;
}
