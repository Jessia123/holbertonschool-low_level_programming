#include "main.h"
/**
 * _memset - primary function
 * @s: first variable
 * @b: second variable
 * @n: third variable
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
