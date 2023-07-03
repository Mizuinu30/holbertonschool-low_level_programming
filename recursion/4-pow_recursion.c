#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion -  a function that returns the value
 *of x raised to the power of y.
 *@x: variable to be raised.
 *@y:power to raise x.
 *Return: On success 1 and -1 on error.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
