#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 *
 * Return: If the node does not exist, return NULL.
 *         Otherwise, return a pointer to the desired node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int count = 0; // Counter to track the current index.
    listint_t *current = head; // Pointer to traverse the linked list.

    // Traverse the list until the end or until the desired index is reached.
    while (current != NULL)
    {
        // If the current index matches the desired index, return the node.
        if (count == index)
            return current;

        // Move to the next node and increment the counter.
        current = current->next;
        count++;
    }

    // If the loop finishes without returning, the node does not exist.
    return NULL;
}
