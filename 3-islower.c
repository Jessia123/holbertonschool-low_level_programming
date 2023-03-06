#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: used to check if lower
 * Return: 0, closes
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
