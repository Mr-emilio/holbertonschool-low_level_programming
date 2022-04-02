#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: node
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
