#include "lists.h"
#include "_strlen.c"

/**
* add_node - check the code
* @head: pointer
* @str: string 
*
* Return: nNode
*/

list_t *add_node(list_t **head, const char *str)
{
	char *cpyS;
	list_t *nNode;
	int length = 0;

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
	return (NULL);

	cpyS = strdup(str);
	if (cpyS == NULL)
	{
		free(nNode);
		return (NULL);
	}

	length = _strlen(cpyS);
	nNode->str = cpyS;
	nNode->len = length;
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}
