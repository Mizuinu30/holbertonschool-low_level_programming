#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 * @dest: where the string will end up.
 * @src: source.
 * @n: number of bytes to copy.
 *
 * Return: copies string with number of bytes.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
