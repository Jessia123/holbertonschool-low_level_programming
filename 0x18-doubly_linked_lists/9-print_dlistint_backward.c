#include "lists.h"
/*
*/size_t print_dlistint_backward(const dlistint_t *h)
{
const dlistint_t *Node = h;
size_t c = 1;
for (; Node->next; c++)
{
Node = Node->next;
}
while (Node)
{
printf("%d\n", Node->n);
Node = Node->prev;
}
return (c);
}
