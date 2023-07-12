#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - pointer concatanated
 *@s1: string 1
 *@s2: string 2
 *Return: nothing
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
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
