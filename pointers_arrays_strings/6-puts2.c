#include "main.h"
/**
 *puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str: string input.
 */

void puts2(char *str)
{
	int index;
	
	for (index = 0; str[index] != '\0'; index++);

	for (index = 0; str[index] != '\0'; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

