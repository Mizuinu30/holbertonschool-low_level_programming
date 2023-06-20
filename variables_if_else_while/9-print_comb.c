#include<stdio.h>
/**
 * main - prints all possible combinations
 * of a single digit separated by a coma
 * and followed by a space in ascending order.
 *
 * Return: Always prints (0).
 */

int main(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{

			putchar((a % 10) + '0');
			putchar((b % 10) + '0');

			if (a == 9 && b == 9)
				continue;

			putchar(','), (' ');
			
		}
	}
	putchar('\n');

	return (0);
}
