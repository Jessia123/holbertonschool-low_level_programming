nclude "lists.h"
#include "_strlen.c"

/**
 * * add_node_end - check the code
 * * @head: pointer
 * * @str: String 
 * * Return: head
 * */


list_t *add_node_end(list_t **head, const char *str)
{
		char *cpyS;
			list_t *nNode, *lNode;
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
												nNode->next = NULL;

													if (*head == NULL)

																*head = nNode;
														else
																{
																			lNode = *head;
																					while (lNode->next != NULL)
																									lNode = lNode->next;
																							lNode->next = nNode;
																								}
															return (*head);
}
