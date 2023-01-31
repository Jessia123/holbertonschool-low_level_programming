#include "main.h"

/**
 * print_alphabet - places character in code
 *
 * Return: 0 and closes the code
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
