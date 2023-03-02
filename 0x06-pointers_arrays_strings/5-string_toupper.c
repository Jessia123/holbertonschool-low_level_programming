#include "holberton.h"
/**
 * string_toupper - main function
 *@a: variable
 *
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0';)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
