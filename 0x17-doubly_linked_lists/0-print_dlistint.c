#include "lists.h"
/**
 * print_dlistint - prints all elements in dlistint_t
 * @h: head node of the double linked list
 *
 * Return: number of nides
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
