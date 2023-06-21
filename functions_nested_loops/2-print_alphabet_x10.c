#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: always (0).
 */

void print_alphabet_x10(void)
{
	int repetitions = 10, i;
	char currentchar = 'a';

	for (i = 0; i < repetitions; i++)
	{
		while (currentchar <= 'z')
		{
			_putchar(currentchar);
			currentchar++;
		}
		currentchar = 'a';
		_putchar('\n');
	}
	_putchar('\n');

}


