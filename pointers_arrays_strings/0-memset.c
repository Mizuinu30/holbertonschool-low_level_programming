#include "main.h"
#include <stdio.h>

/**
 *_memset - a function that fills the memory with a constant byte.
 *@s:input var.
 *@b:char that will be passed.
 *@n: number of times b will be passed inside of s.
 *Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
