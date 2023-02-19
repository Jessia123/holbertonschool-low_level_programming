#include "main.h"
/**
 * _strspn - main function
 * @s: first variable
 * @accept: second variable
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[x] != '\n'; y++)
		{
			if (accept[y] == s[x])
			{
				break;
			}
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (0);
}
