#include "main.h"
/**
 * swap_int - swaps the value of a and b
 * @a: first int
 * @b: second int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
