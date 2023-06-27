#include "main.h"
#include <string.h>
/**
 *rev_string - reverses a string.
 *@s: input string.
 *Return: reverse string.
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s;

	for (i = 0; i < len - 1; i++)
	end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}

}
