#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
* @ht: The hash table to add or update the key/value to
* @key: The key of a value
* @value: The value associated with the key
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *node, *new_node;

if (ht == NULL || key == NULL || strcmp(key, "") == 0)
return (0);

idx = key_index((const unsigned char *) key, ht->size);
node = ht->array[idx];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;

return (1);
}

