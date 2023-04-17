#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hashtable to delete
 * Return: void
 */



void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *search;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			search = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = search;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
