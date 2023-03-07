#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
/*
 * print_numbers - check the code
 * @separator: string
 *  @n: integer 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int a = 1;
	va_list tp;
	if (!separator)
	{
		a = 0;
	}
	va_start(tp, n);
	for (x = 0 ; x < n; x++)
	{
		printf("%d", va_arg(tp, int));
		if (x < n - 1 && a != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(tp);
}

