#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table
 * @key: the data key
 * @value: the data value
 * 
 * Return: 1 if code is successful and 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new;
    hash_node_t *temp;

    index = key_index((const unsigned char *) key, ht->size);
    new = malloc(sizeof(hash_node_t));
    temp = ht->array[index];

    if (ht == NULL || strlen(key) == 0)
		return (0);

    if (!new)
    {
        return (0);
    }

    if (!(ht->array[index]))
    {
        new->value = strdup(value);
        new->key = strdup(key);
        new->next = NULL;
        ht->array[index] = new;
    }

    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free (temp->value);
            temp->value = strdup(value);
            return (1);
        }

        temp = temp->next;
    }
   

    new->value = strdup(value);
    new->key = strdup(key);
    new->next = ht->array[index];
    ht->array[index] = new;
    return (1);
}
