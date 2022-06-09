#include "lists.h"
/**
 * dlistint_t *add_dnodeint - add a nes node to the begining
 * of a linked list
 * @head: pointer to the head node
 * @n: the integer value to be added to the linked list
 *
 * Return: address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}

	if (*head)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		(*head)->prev = new_node;
	}

	new_node->next = *head;
	new_node->prev = NULL;
	new_node->n = n;

	*head = new_node;

	return (new_node);
}
