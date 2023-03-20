#include "lists.h"

/**
* get_nodeint_at_index - check the code
* @head: pointer
* @index: interger variable
* Return: NULL 
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; head != NULL; n++)
	{
		if (n == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
