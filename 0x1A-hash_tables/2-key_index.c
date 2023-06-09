#include "hash_tables.h"


/**
 * key_index - check the code
 * @key: a ky to find
 * @size: the size, I dont know what to do with it
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
