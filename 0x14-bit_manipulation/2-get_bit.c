#include "main.h"


/**
* get_bit -  check the code
* @n: interger variable
* @index: interger variable
* Return: tone & 1
*/

int get_bit(unsigned long int n, unsigned int index)
{
		int tone = n >> index;

	if (sizeof(n) * 8 < index)
	{
		return (-1);
	}
	return (tone & 1);
}
