#include "lists.h"
/**
 * *add_nodeint_end - a function that add a new node at the end of
 * a linked list
 * @head: the first node of the linked list
 * @n: the integer of the dnode to be added
 *
 * Return: the address of the new element and null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;

	}

	temp->next = new_node;

	return (new_node);
}
