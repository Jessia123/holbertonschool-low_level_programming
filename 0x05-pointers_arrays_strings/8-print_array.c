#include "main.h"
/**
 * print_array - program startup
 * @a: first function
 * @n: second function
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	putchar('\n');
}
