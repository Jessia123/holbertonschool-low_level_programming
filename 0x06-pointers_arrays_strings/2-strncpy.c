#include "holberton.h"

/**
 * *_strncat - main function
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen;
	/* measures the length of dest*/
	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{}

	/* measures the length from src*/
	for (i = 0; i < n; i++)
	{
		dest[destlen + i] = src[i];
		if (src[i] == '\0')
			break;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
 29  
0x06-pointers_arrays_strings/2-strncpy.c
@@ -0,0 +1,29 @@
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
