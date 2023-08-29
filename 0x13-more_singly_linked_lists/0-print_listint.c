#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list of type 'list_t'
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (!(h->n)) /*Null*/
			printf("[0] (nil)\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
