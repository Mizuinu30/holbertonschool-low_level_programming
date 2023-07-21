#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments to be passed.
 *
 * Return: 0 if 0 and the sum when correct.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;



	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

