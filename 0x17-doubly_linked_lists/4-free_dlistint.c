#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
	free(head);
}
