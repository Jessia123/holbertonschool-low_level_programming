#include "main.h"

/**
 * print_alphabet_x10 - starts the function
 *
 * Return: 0, exits program
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
		_putchar(alpha);
		}
	_putchar('\n');
	}
}
