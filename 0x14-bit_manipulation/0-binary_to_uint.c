#include "main.h"

/**
* binary_to_uint - check the code
* @b: pointer
* Return: num
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int n;

	if (b == NULL)
	{
		return (0);
	}
		for (n = 0; b[n] != '\0'; n++)
		{
			if (b[n] == '0' || b[n] == '1')
			{
				num <<= 1;
				num += b[n] - '0';
			}
				else
				{
					return (0);
				}
		}
	return (num);
}
