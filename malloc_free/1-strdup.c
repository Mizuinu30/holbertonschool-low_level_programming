#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - checks the input string.
 * @str: string'
 * Return: Null if its null otherwise allocates memory to duplicate.
 */

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
		return (NULL);

	strcpy(duplicate, str);

	return (duplicate);
}

