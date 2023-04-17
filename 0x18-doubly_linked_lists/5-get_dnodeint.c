#include "lists.h"
/*
 */dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ptr;
ptr = head;
while (ptr)
{
if (i == index)
{
return (ptr);
}
ptr = ptr->next;
i++;
}
return (NULL);
}
