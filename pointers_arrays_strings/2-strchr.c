#include "main.h"
#include <stdio.h>

/**
 *_strchr - a function that locates a character in a string.
 *@s: address of the pointer.
 *@c: input.
 *
 * Return: first occurrence of c in the string or null
 * if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;

		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
