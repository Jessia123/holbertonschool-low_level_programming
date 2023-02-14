#include "main.h"
/**
 * _strchr - main function
 * @s: first variable
 * @c: second variable
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}

