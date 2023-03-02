

#include "main.h"

/**
* factorial - function to print factorial
* @n: pointer being examined
* Return: return factorial of given number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
