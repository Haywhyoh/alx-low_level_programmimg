#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head node of the doubly linked list
 * @idx: index of the list
 * @n: integer to be added
 *
 * Return: NULL if failed or address of the new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!*h)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
	}

	while (i < idx)
	{
		(*h) = (*h)->next;
		temp = temp->next;
		i++;
	}

	new_node->prev = temp;
	new_node->next = *h;

	return (new_node);
}
