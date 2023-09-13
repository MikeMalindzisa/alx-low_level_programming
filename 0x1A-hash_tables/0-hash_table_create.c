#include "hash_tables.h"

/**
* hash_table_create - Creates a new hash table with the given size.
* @size: The size of the hash table array.
*
* Description: Creates a hash table.
* Return: A pointer to the newly created hash table, or NULL on failure.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size <= 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	initialize_array(new_table->array, size);

	return (new_table);
	}

/**
* initialize_array - Initializes each index of a hash table array to NULL.
* @array: The array to initialize.
* @size: The size of the array.
*/
void initialize_array(hash_node_t **array, unsigned long int size)
{
	unsigned long int index;

	for (index = 0; index < size; index++)
		array[index] = NULL;
}
