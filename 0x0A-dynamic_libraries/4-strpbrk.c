#include "main.h"
/**
 * _strpbrk - main function
 * @s: first variable
 * @accept: second variable
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int byte;
	int string;

	for (byte = 0; *s != '\0'; byte++)
	{
		for (string = 0; accept[string] != '\0'; string++)
		{
			if (*s == accept[string])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
