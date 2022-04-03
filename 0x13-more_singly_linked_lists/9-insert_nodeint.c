#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: head node
 * @idx: index
 * @n: data of node
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (node)
	{
		if ((idx - 1) == i)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
