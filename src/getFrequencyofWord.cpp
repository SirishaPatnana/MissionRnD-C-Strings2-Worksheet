/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int len(char *str)
{
	int c = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
		c++;
	return c;
}
int count_word_in_str_way_1(char *str, char *word){
	int i, j,k, count = 0, l1 = len(str), l2 = len(word);
	for (i = 0; i < *(str + i) != '\0';)
	{
		j = 0;
		k = i;
		while ((str[k] == word[j]) && str[k] != '\0')
		{
			k++;
			j++;
		}
		if (j == l2)
			count++;
		i++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){

	return 0;
}

