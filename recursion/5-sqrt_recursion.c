#include "main.h"
#include <stdio.h>

/**
 * verifier - verifies input number from n to the base.
 * @n: number to be squared and compare against base.
 * @base: base number to check.
 * Return: Natural square root of number base.
 */
int verifier(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (verifier(n + 1, base));
}

/**
 * _sqrt_recursion -  a function that returns the natural
 * square root of a number.
 * @n: the number to chec for the square root.
 *
 * Return: Natural square root of n.
 */

int _sqrt_recursion(int n)
{
	return (verifier(1, n));
}
