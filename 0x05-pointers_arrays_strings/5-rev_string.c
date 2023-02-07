#include "main.h"
/**
 * rev_string - main function
 * @s: runs to reverse
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int length;
	int string;
	char reverse;

	for (length = 0; s[length] != '\0'; length++)
	{
		continue;
	}
	for (string = length - 1; string >= length / 2; string--)
	{
		reverse = s[string];
		s[string] = s[length - string - 1];
		s[length - string - 1] = reverse;
	}
}
