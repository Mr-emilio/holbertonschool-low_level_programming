#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: head node
 * Return: pointer to the head node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *nextnode = NULL;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = node;
		node = *head;
		*head = nextnode;
	}
	*head = node;
	return (*head);
}
