#include "hash_tables.h"
/*
 */hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *table_of_hash = malloc(sizeof(hash_table_t));

	if (size == 0 || table_of_hash == NULL)
		return (NULL);

	table_of_hash->size = size;
	table_of_hash->array = calloc(table_of_hash->size, sizeof(hash_table_t *));

	if (table_of_hash->array == NULL)
		return (NULL);

	return (table_of_hash);
}
