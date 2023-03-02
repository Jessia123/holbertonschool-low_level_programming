#include "main.h"
/**
 * print_diagonal - prints diagonally
 * @n: forgot comment
 * Return: 0
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
