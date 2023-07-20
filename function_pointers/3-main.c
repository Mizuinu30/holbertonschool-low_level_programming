#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into main.
 * @argc: number of command line arguments.
 * @argv: array name.
 * Return: printf and whats inside it.
 */

int main (int argc, char *argv[])
{
	int n1, n2;
	int (*result)(int, int);
	result = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	n1 = atoi (argv[1]);
	n2 = atoi (argv[3]);

	if (get_op_func(argv[2]) == NULL)

	{
		printf("Error\n");
		exit (99);
	}

	if ((atoi(argv[2]) == atoi ("/") || atoi(argv[2]) == atoi ("%")) && n2 == 0)
	{
		printf("error\n");
		exit (100);
	}
	return (printf("%d\n",result(n1, n2)));
	}
