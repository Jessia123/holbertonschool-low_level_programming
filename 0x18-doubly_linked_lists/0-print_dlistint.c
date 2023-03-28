#include <stdio.h>
#include "lists.h"

/**
* print_listint -  check the code
* @h: pointer
*
* Return: counter
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	counter++;
	h = h->next;
	}
	return (counter);
}
