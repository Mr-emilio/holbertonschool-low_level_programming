#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: node
 * Return: the data in head node or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (!*head)
		return (0);

	data = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (data);
}
