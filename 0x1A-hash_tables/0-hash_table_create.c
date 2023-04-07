#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table
* @size: Size of the array
*
* Return: A pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htable = malloc(sizeof(hash_table_t));
if (htable == NULL)
return (NULL);

htable->array = calloc(size, sizeof(hash_node_t *));
if (htable->array == NULL)
{
free(htable);
return (NULL);
}

htable->size = size;

return (htable);
}

