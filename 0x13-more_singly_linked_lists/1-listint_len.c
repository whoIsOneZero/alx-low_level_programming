#include "lists.h"

/**
 * listint_len - calcs. the num. of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
