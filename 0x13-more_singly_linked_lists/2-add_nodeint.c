#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of a list...
 * ... of type 'list_t'
 * @head: double pointer to the head of the linked list
 * @n: new node to be added
 *
 * Return: pointer to the new node (SUCCESS)
 * or NULL (FAIL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *begin;

	begin = malloc(sizeof(listint_t));
	if (!begin)
		return (NULL);

	/*Initalize the new node*/
	begin->n = n;

	/*'next' of new node should point to old head (first node)*/
	begin->next = *head;
	/*Change head to now point to 'new' node*/
	*head = begin;

	return (begin);
}
