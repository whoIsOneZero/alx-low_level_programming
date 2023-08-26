#ifndef LINKED_LISTS
#define LINKED_LISTS

/**
 * struct list_s - a singly linked list
 * @str: string with memory allocated using malloc
 * @len: length of the string
 * @next: pointer to the next node in the linked list
 *
 * Description: an implementation of singly linked lists
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LINKED_LISTTS*/
