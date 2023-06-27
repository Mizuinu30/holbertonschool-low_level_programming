#include "main.h"
/**
 *_puts- it's a function that prints a string followed, by a new line.
 *@str: input string.
 *
 *Return: length of string
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
