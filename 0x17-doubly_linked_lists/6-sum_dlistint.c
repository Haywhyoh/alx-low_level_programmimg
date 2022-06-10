#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a double linkd_list
 * @head: the head node of the linkd list
 *
 * Return: 0 if list is empty or sum of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
