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
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;

	}
	putchar('\n');

	return (0);
}
