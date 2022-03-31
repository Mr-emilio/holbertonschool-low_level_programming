#include "lists.h"
/**
 * *add_node - adds a new node
 * @head: top of list
 * @str: string of the new node
 * Return: addres of new element o NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
