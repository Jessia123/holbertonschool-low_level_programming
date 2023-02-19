#include "main.h"
/**
 * _strcpy - main function
 * @src: source variable
 * @dest: destination variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
