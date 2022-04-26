#include "lists.h"
/**
 * listint_len - return the number of elements in a
 * linked list.
 * @h: the first node of the linked list
 *
 * Return: the number of elemens
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
