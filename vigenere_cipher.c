#include <stdio.h>
#define MAX 255

int stringLength(char *);

int main(int argc, char *argv[])
{
	//checking for the no. of arguments.
	if (argc!=2)
	{
		printf("enter only one argument(string) apart from the prog. name\n");
		return 1;
	}

	//storing the argument into key word.
	int n = stringLength(argv[1]);
	char key[n];
	int sc=0;
	while (argv[1][sc] != '\0')
	{
		key[sc] = argv[1][sc];
		sc++;
	}
	printf("%s\n",key);

	//iterate through string to make sure its alphabetical.
	for (int i = 0; i < n; i++)
	{
		if ( ! ((key[i]>='A' && key[i]<='Z') || (key[i]>='a' && key[i]<='z' )))
		{
			printf("enter only alphabets in the argument\n");
			return 1;
		}
	}

	//declaring, asking for user text, and storing it. unsigned is necessary as addition can cause exceeding. 
	unsigned char text[MAX];
	printf("enter the text you want to cipher\n");
	gets(text);
	int textLength = stringLength(text);

	//checking the key length is less than the alphabet character length.
	int keyLength = stringLength(key);

	//creating the vigenere cipher text.
	int tmp = 0;
	for (int i = 0,j=0; i < textLength; i++)
	{
		if (j>=keyLength)
		{
			j=0;
		}

		//storing the characters of the key in tmp according to index.
		tmp = key[j];

		//making tmp's Aa is 0 and Zz as 25.
		if (tmp>='A' && tmp<='Z')
		{
			tmp -= 'A';
		}
		else if (tmp>='a' && tmp<='z')
		{
			tmp -= 'a';
		}

		//paricular index of the input string is in A-Z or a-z or any other character.
		if (text[i]>='A' && text[i]<='Z')
		{
			text[i] += tmp;
			text[i]>'Z' ? (text[i]-=26) : text[i];
			j=j+1;
		}
		else if (text[i]>='a' && text[i]<='z')
		{
			text[i] = text[i] + tmp;
			text[i]>'z' ? (text[i]-=26) : text[i];
			j=j+1;
		}
		else
			text[i] = text[i];
	}
	
	//printing the ciphered text after updating in the same variable.
	printf("the ciphered text is : %s\n",text);	
	return 0;
}

//calculating the length of the string.
int stringLength(char len[])
{
	int i=0,count=0;
	while (len[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
