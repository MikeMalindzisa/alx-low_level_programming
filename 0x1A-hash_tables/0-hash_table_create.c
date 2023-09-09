#include "hash_tables.h"

/**
* print_malloc_error - Prints a malloc error message to stderr.
*/
void print_malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
}

/**
* hash_table_create - Creates a hash table.
* @size: the size, in the number of nodes, to make the new hash table.
*
* Return: a pointer to the newly created hash table, or NULL on failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
	{
		print_malloc_error();
		return (NULL);
	}

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t *));

	if (hashTable->array == NULL)
	{
		print_malloc_error();
		free(hashTable);
		return (NULL);
	}

	return (hashTable);
}
