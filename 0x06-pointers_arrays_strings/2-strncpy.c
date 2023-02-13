#include "holberton.h"

/**
 * *_strncpy - main function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* measures the length from src*/
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (dest);

