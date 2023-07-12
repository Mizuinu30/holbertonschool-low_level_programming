#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatanate two strings using malloc.
 *@s1: points to char location in memory
 *@s2: points to char location in memory
 *Return: null on failure or the concat pointers.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}
	return (ptr);
}
