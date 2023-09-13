#include "hash_tables.h"

/**
* key_index - Gets the index of a key in a hash table.
* @key: The key to hash and get the index for.
* @size: The size of the hash table array.
*
* Return: The index where the key should be stored in the array.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
