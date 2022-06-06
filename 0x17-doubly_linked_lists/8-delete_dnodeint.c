#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at the index of a dlistint
 * @head: head of list
 * @index: index tha should be deleted
 * Return: 1 if succeded or -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i;

	if (head && *head)
	{
		for (i = 0; i < index; i++)
		{
			if (node->next == NULL)
				return (-1);
			node = node->next;
		}
		if (index == 0)
			*head = (*head)->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
		if (node->prev != NULL)
			node->prev->next = node->next;
		free(node);
		return (1);
	}
	return (-1);
}
