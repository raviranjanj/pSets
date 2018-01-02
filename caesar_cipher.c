/* this is a program about the caesar cipher in which we shift each letter of the text 
*  to a particular key input by the user.
*
*  program: caesarCipher.c
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	//checking the command line argument counts.
	if (argc!=2)
	{
		printf("please enter the required input\n");
		return 1;
	}

	//storing and converting the command line input word into integer through library function.
	int shift = atoi(argv[1])%26;
	char inputText[255];

	//taking the input from user.
	printf("enter the words you want to encrypt : ");
	gets(inputText);

	//calculate the string length.
	int length = 0,i=0;
	while(inputText[i]!='\0')
	{
		length++;
		i++;
	}

	//shifting each character by desired shift, and storing to same character type.
	for (int i = 0; i < length; i++)
	{
		if (inputText[i]>=65 && inputText[i]<=90)
		{
			if (inputText[i] + shift>90)
				inputText[i] += shift - 26;
			else
				inputText[i] += shift;
		}
		if (inputText[i]>=97 && inputText[i]<=122)
		{
			if (inputText[i] + shift>122)
				inputText[i] += shift - 26;
			else
				inputText[i] += shift;
		}
		else
			inputText[i] = inputText[i];
	}

	//printing the ciphered text after updating in the same array.
	printf("%s\n",inputText);	
	return 0;
}
