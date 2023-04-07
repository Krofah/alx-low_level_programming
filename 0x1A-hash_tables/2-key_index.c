#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* key_index - Computes the index of a given key in a hash table
* @key: The given key
* @size: The size of the hash table
*
* Return: The index of a key in a hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_val = 0;
const unsigned char *p;

for (p = key; *p != '\0'; p++)
hash_val = (31 * hash_val + *p);

return (hash_val % size);
}
