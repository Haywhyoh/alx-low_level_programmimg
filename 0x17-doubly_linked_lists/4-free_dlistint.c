#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t
 * @head: the first node of the double linked list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
