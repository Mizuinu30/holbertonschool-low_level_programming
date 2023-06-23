#include "main.h"

/**
 *_isupper - function that checks for uppercase letters.
 *@uc: the int for the parameters of the fucntion.
 *
 *Return: (0)
 */

int _isupper(int uc)
{
	if (uc >= 65 && uc <= 90)
	{
		return (1);
	}
	else
	return (0);
}
