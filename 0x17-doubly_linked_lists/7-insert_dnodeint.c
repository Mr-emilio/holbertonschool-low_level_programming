#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: first node
 * @idx: position to insert node
 * @n: int to add into new node
 * Return: NULL or new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current)
	{
		if (i == (idx - 1))
		{
			if (!current->next)
				return (add_dnodeint_end(h, n));

			newnode->next = current->next;
			newnode->prev = current;
			current->next->prev = newnode;
			current->next =newnode;
			return (newnode);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
