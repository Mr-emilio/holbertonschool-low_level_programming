#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: list
 * @n: int to add into new node
 * Return: new node addres
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *lastnode = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;
	return (lastnode);
}
