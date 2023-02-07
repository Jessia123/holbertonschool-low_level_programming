#include "main.h"

/**
 * print_most_numbers - prints number 0-9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
	{
		if (count != '2' && count != '4')
		{
			_putchar(count);
		}
}
_putchar('\n');
}
