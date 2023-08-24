#include "variadic_functions.h"

/**
 *  * sum_them_all - check the code
 *   * @n: variable
 *    * Return: total
 *     */

int sum_them_all(const unsigned int n, ...)
{
		unsigned int a, total = 0;
			va_list tp;
				if (n == 0)
						{
									return (0);
										}
					va_start(tp, n);
						for (a = 0; a < n; a++)
								total += va_arg(tp, int);
							va_end(tp);
								return (total);
}
