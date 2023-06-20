#include<stdio.h>
/**
 * main - prints all the #s of base 16 in lowercase,
 * followed by a new line.
 * Return: Always (0).
 */

int main(void)
{
	int hexa;
	char lower;

	for (hexa = 0; hexa < 10; hexa++)
		putchar((hexa % 10) + '0');

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
