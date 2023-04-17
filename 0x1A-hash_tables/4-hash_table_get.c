#include "hash_tables.h"
/*
 */char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *search;


	if (ht == NULL)
		return (NULL);

	search = ht->array[key_index((const unsigned char *)key, ht->size)];


	while (search)
	{
		if (strcmp(key, search->key) == 0)
			return (search->value);
		search = search->next;
	}
	return (NULL);
}
