#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint list
 * @head: the first node of the linked list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
