#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (!hash_table || !size)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	while (index < size)
	{
		hash_table->array[index] = NULL;
		index++;
	}
	hash_table->size = size;
	return (hash_table);
}
