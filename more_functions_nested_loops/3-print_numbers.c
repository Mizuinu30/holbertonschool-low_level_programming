#include "main.h"

/**
 *print_numbers - Write a function that prints the numbers,
 *from 0 to 9, followed by a new line.
 *
 *Return(0)
  */

void print_numbers(void)
{
	char c = '0'

	while (c <= '9')
	{
		_putchar(c);
			c++;
	}
	_putchar('\n');
}
