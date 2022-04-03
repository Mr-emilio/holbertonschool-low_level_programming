#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth of a linked list
 * @head: node
 * @index: index of the node
 * Return: the nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indx = 0;

	while (head)
	{
		if (indx == index)
			return (head);

		head = head->next;
		indx++;
	}
	return (NULL);
}
