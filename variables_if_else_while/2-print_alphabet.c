#include<stdio.h>

/**
 *main - will print the whole alphabet in lowercase.
 *putchar-writes a single character.
 *Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar ('\n');

	return (0);
}
