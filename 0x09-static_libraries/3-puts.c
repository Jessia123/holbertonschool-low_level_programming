#include "main.h"
/**
 *  _puts - main function
 * @str: variable string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
