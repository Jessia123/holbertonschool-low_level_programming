#include "main.h"

/**
 * *_strcat - main function
 * @dest: variable
 * @src: variable
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int destlen;

	/* Gets the length of dest */
	for (destlen = 0;  dest[destlen] != '\0'; destlen++)
	{}
	/* sets all of src at the end of dest */
	for (i = 0 ; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
		dest[destlen + i] = '\0';
	/* Set the null character at the end of dest */

	return (dest);

}

