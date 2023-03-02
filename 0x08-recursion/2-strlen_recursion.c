#include "main.h"

/**
* _strlen_recursion - sunction to find length of string using recursion
* @s: pointer being examined
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	return (1 + _strlen_recursion(s + 1));
}
