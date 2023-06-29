#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase of a stirng to uppercase.
 * @n: to change.
 * Return: uppercase letters.
 */

char *string_toupper(char *n)
{
	int i = 0;
	int desp = 'a' - 'A';

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - desp;
		}
	}
	return (n);
}
