#include "main.h"
/**
 *puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string input.
 */

void puts2(char *str)
{
	int index, jump;

	while (str[index] != '\0')
		index++;

	for (jump = 0; str[index] != jump; jump += 2)
	{
		_putchar(str[jump]);
	}
	_putchar('\n');
}
