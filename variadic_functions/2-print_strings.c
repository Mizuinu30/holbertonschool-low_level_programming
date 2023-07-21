#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *strg;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		strg = va_arg(args, char *);

			if (strg == NULL)
			{
				printf("%s", "nil");
			}
	printf("%s", strg);

			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}

	va_end(args);
	}

	printf("\n");
}
