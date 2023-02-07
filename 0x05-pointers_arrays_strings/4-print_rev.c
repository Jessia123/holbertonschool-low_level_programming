#include "main.h"
/**
 * print_rev - program starts
 * @s: pointer for counting new line reverse
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
