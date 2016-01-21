/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	int x;
	*consonants = 0;
	*vowels = 0;
	if (str != NULL)
	{
		for (int i = 0; *(str + i) != '\0'; i++)
		{
			x = *(str + i);
			if (x > 90)
				x = x - 32;
			if (x <= 90 && x >= 65)
			if (x == 65 || x == 69 || x == 73 || x == 79 || x == 85)
				vowels[0]++;
			else
				consonants[0]++;
		}
	}

}
