/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
int length(char *str)
{
	int c = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
		c++;
	return c;
}
char* remove_spaces(char *str)
{
	char *str1;
	int i, count = 0, c = 0, len = length(str);
	str1 = (char*)malloc(len*sizeof(char));
	for (i = 0; i < len; i++)
	{
		if (c == 0 && *(str + i) != ' ')
			c = 1;
		if (c != 0)
		{
			*(str1 + count) = *(str + i);
			count += 1;
		}
	}
	if (count == 0)
		return "";
	for (i = len - 1; *(str + i) == ' '; i--)
		count--;
	*(str1 + count) = '\0';
	return str1;
}
char * get_last_word(char * str){
	int i, len = length(str);
	char *str1;
	int c = 0;
	str1 = (char*)malloc(len*sizeof(char));
	str1 = remove_spaces(str);
	if (str1 == "")
		return "";
	for (i = 0; *(str1 + i) != '\0'; i++)
	{
		if (*(str1 + i) == ' ')
			c = 0;
		else
		{
			*(str1 + c) = *(str1 + i);
			c++;
		}
	}
	*(str1 + c) = '\0';
	return str1;
}