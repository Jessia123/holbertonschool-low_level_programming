#include "main.h"

/**
 * calloc
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (!ptr)
	{
		return (NULL);
	}

	for (x = 0; x < nmemb * size; x++)
	{
		ptr[x] = 0;
	}
	return (ptr);
}
