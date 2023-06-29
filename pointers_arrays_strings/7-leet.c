#include "main.h"
#include <stdio.h>

/**
 *leet - function that encodes a string in to leet.
 *@n: input string.
 *Return: (n).
 */
char *leet(char *n)
{
	char letras[] = {'a','e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int  numeros[] = {'4', '3','0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0, j = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == letras[j])
			{
				(n[i] = numeros[j]);
			}
		}
	}
	return (n);
}
