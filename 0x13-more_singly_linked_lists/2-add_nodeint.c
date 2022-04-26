#include "lists.h"
/**
 * add_nodeint - functions that adds a new node at
 * the beginning of a linked list
 * @head: pointer to the head node pointer
 * @n: the interger to be added
 *
 * Return: the address of the new element and Null if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

