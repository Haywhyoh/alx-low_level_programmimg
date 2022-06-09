#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: the head node of the dpuble linked list
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}