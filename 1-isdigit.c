#include "main.h"
/**
 * _isdigit - checks to see if file is digit
 * @c: variable that propagates if digit or not
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
