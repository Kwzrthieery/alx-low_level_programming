#include "lists.h"
/**
 * listint_len - function that returns the number of the elements
 * in a linked listint_t list.
 *
 * @h: Parameter Pointer to the head of the linkked list
 *
 * Return: The number of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}

