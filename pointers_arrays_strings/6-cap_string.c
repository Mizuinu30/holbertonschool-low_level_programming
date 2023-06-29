#include "main.h"
#include <stdio.h>

/**
 *cap_string - function that capitalizes all words of a string.
 *@n: input array
 *
 * Return: (n).
 */


char *cap_string(char *n)
{
	int i = 0;
	int j = 0;
	char myarray[] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};
	int num_separators = sizeof(myarray) / sizeof(char);
	int capitalize_next = 1;

	for (i = 0; n[i] != '\0'; i++)
	{
		int is_separator = 0;

		for (j = 0; j < num_separators; j++)
		{
			if (n[i] == myarray[j])
			{
				is_separator = 1;
				break;
			}
		}
		if (is_separator)
		{
			capitalize_next = 1;
		}
		else if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (capitalize_next)
			{
				n[i] = n[i] - ('a' - 'A');
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = 0;
		}
	}
	return (n);
}
