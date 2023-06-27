#include "main.h"

/**
 * _strlen -  returns the length of a string.
 * @s: input string.
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0' ; len++);

	return (len);
}

