#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: first node
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
