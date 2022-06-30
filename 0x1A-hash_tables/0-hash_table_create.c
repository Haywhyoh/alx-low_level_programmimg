#include "hash_tables.h"
/**
 * hash_table_t- *hash_table_create: function to crate hash table
 * @size: size of the hash table
 * 
 * Return:  a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int i;

    if (size < 0)
        return (NULL);

    hash_table = malloc(sizeof(hash_table_t));

    if (!hash_table)
        return (NULL);

    hash_table->size = size;
    hash_table->array = malloc(size * sizeof(hash_node_t));

    if (!(hash_table->array))
        return (NULL);
    
    for (i = 0; i <= size; i++)
    {
        hash_table->array[i] = NULL;

    }

    return (hash_table);
}
