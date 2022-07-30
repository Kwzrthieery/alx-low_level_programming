#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node int the linked list
 *
 * Return: resulting form
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int i = 0;

	if (head == NULL)
		return (0);
	while (new)
	{
		i += new->n;
		new = new->next;
	}
	return (i);
}
