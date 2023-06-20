#include<stdio.h>
/**
 * main - prints all possible combinations
 * of a single digit separated by a coma
 * and followed by a space in ascending order.
 *
 * Return: Always prints (0).
 */

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 10; i++)
	{
        for (j = i; j < 10; j++)
			{
            putchar(i + '0');
            putchar(j + '0');

            if (j < 9) {
                putchar(','), (' ');
            }
        }
    }


	putchar('\n');


    return 0;
}

