#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str:entry string.
 */

void puts_half(char *str)
{
	int n = strlen(str), i = n / 2;

	for ( ; i < n; i++)
		_putchar(str[i]);

	_putchar('\n');
}
