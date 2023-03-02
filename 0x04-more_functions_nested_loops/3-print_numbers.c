#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
	{
		_putchar(count);
	}
	{
		_putchar('\n');
	}
}
