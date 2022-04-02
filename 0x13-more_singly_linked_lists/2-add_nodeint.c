#include "lists.h"
/**
 * *add_nodeint - adds node at beginning of linked list
 * @head: head node
 * @n: the new node
 * Return: address of new node  or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
