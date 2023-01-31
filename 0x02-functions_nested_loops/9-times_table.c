#include "main.h"
/**
 * times_table - void operator that counts
 *
 *
 * Return: 0
 */
void times_table(void)
{

	int l;
	int h;
	int p;

	for (l = 0; l <= 9; l++)
	{
		putchar('0');
		for (h = 1; h <= 9; h++)
		{
			p = l * h;
			putchar(',');
			putchar(' ');
			if (p <= 9)
			{
				putchar(' ');
		}
			else
			{
				putchar((p / 10) + '0');
			}
			putchar((p % 10) + '0');
		}
		putchar('\n');
	}
}
