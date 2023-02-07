#include "main.h"

/**
 * puts_half - primary function
 * @str: pointer for counting half
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int x;
	int y;
	int half;

	for (x = 0; str[x] != '\0'; x++)
	{
		continue;
	}
	if ((x % 2) == 0)
	{
		half = (x / 2);
	}
	else
	{
		half = ((x + 1) / 2);
	}
	for (y = half; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

