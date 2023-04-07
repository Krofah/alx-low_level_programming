#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table
* @ht: The hash table to frees
*
* Return: Nothing!
*/
void hash_table_delete(hash_table_t *ht)
{
if (ht == NULL)
{
return;
}

for (size_t i = 0; i < ht->size; i++)
{
hash_node_t *node = ht->array[i];
while (node != NULL)
{
hash_node_t *temp = node;
node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}

free(ht->array);
free(ht);
}
