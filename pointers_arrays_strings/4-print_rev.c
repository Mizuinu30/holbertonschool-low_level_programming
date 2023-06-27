#include "main.h"
/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: inout string.
 */

void print_rev(char *s)
{
	int end, length = 0;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	while (end >= 0)
	end--;
		_putchar(end--);

	_putchar('\n');
}
