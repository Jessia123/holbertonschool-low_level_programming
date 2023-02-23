#include "main.h"

/**
* string_nconcat - entry point to concatenate 2 strings
* @s1: string being evaluated
* @s2: string being evaluated
* @n: value being passed
* Return: concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, s1Length = strlen(s1);
	unsigned int y = 0;
	char *ptr;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	ptr = malloc(sizeof(*ptr) * s1Length + n + 1);

	if (!ptr)
	{
		return (NULL);
	}

	for (x = 0; x < (s1Length + n); x++)
	{
		if (n >= strlen(s2))
		{
			n = strlen(s2);
		}
		if (x < s1Length)
		{
			ptr[x] = s1[x];
		}
		else
		{
			ptr[x] = s2[y++];
		}
	}
	ptr[x] = '\0';
	return (ptr);
}
