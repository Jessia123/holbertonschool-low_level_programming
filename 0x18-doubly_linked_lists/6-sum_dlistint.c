#include "lists.h"
/*
 */int sum_dlistint(dlistint_t *head)
{
int num;
num = 0;
while (head)
{
num += head->n;
head = head->next;
}
return (num);
}
