#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list from memory
 * @head: list_t (linked list) to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
