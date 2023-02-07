#include "main.h"
/**
 * print_line - prints line
 * @n: counts needed lines
 * Return: void
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
