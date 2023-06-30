#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: place to copy too.
 * @src: thing to copy.
 * @n: number of times to copy.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
