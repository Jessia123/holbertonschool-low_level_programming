#include "main.h"

/**
* _pow_recursion - function to raise x by the power of y
* @x: pointer being evaluated
* @y: pointer being evaluated
* Return: returns x to the value of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
