#include "main.h"

/**
* print_chessboard - function to print a chessboard
* @a: pointer being evaluated
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int height;
	int length;

	for (length = 0; a[length][7]; length++)
	{
		for (height = 0; height < 8; height++)
		{
			_putchar(a[length][height]);
		}
		_putchar('\n');
	}
}

