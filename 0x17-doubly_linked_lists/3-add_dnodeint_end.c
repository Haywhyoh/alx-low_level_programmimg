#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t
 * @head: the first node of the double linkd list
 * @n : the interger to be added to the end of the list
 *
 * Return: the address of the new element or NULL if it failed
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;
	temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	if (!head)
		return (NULL);


	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
