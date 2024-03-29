#include "lists.h"
/**
 *listint_len - the list of the integer length
 *@h: is an h
 *Return: county county
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *car = h;
	int count = 0;

	while (car)
	{
		count++;
		car = car->next;
	}
	return (count);
}