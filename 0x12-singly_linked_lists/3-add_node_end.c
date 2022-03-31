#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a linked list
 * @head: first node
 * @str: string of the new node
 * Return: address of the new elemente or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}
