/*
*	To find minimum number insertions needed to make a string palindrome.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* S, int j)
{
	for (int i=0; i<j; i++,j--)
		if(S[i] != S[j])
			return false;
	return true;
}

void solution(char* S)
{
	int n = strlen(S);
	for (int i = n-1; i>= 0; i--)
		if(isPalindrome(S, i))
		{
			printf("%d",(n-i-1));
			break;
		}
}

int main(void)
{
	char *S;
	S = (char *)malloc(50*sizeof(char));
	scanf("%s", S);
	for(int i =0, n = strlen(S); i<n; i++)
		if (S[i] < 97 && S[i] > 122 && n > 5000 && n < 1)
			break;
	solution(S);
	free(S);
	return 0;
}
