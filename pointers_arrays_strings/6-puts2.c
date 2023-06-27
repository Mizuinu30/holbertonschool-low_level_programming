#include "main.h"
/**
 *puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string input.
 */

void puts2(char *str)
{
	int l = 0, count;

	while (str[l] != '\0')
		l++;

	for (count = 0; count < l; count  += 2)
		_putchar(str[count]);

	_putchar('\n');
}
