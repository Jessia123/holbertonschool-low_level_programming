#include "lists.h"


/**
* list_len - check the code
* @c: pointer
* Return: count
*/

size_t list_len(const list_t *c)
{
	size_t count = 0;

	while (c != NULL)
	{
		count++;
		c = c->next;
	}
	return (count);
}
