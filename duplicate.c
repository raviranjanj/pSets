#include <stdio.h>
#include <string.h>

struct word_n_count
{
	char word[10];
	int times;
};
int count = 0;

int check_in_dup(struct word_n_count[], char[]);

int main()
{
	char arr[70], each_word[10];
	struct word_n_count dup[20];
	
	for (int i = 0; i < 20; i++)
	{
		dup[i].times = 0;
	}

	printf("Enter a line : ");
	fgets(arr, 70, stdin);
	
	
	
	for (int i = 0, j = 0, n = strlen(arr); i < n; i++)
	{
		while (i < n && arr[i] != ' ')
			each_word[j++] = arr[i++];

		if (j != 0)
		{
			each_word[j] = '\0';
			count =	check_in_dup(dup, each_word);
			j = 0;
		}
	}
	
	for (int i = 0; i < count; i++)
		if (dup[i].times > 1)
			printf("%s ==> %d\n", dup[i].word, dup[i].times);
	
	return 0;
}

int check_in_dup(struct word_n_count dup[], char each_word[])
{
	int i=0;
	while (i < count)
	{
		if (strcmp(dup[i].word, each_word) == 0)
		{
			dup[i].times += 1;
			return count;
		}
		i++;
	}
	
	strcpy(dup[count].word, each_word);
	dup[count].times += 1;
	
	return ++count;
}

