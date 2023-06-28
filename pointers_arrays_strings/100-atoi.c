#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/**
 *_atoi - function that converts string to integers.
 *@s: string to be converted.
 *Return: intergers and if no number 0.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
				return (INT_MIN);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
