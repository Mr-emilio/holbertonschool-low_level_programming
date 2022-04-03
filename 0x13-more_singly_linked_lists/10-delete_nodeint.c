#include "lists.h"
/**
 * delete_nodeint_at_index - delete node of linked list
 * @head: head node
 * @index: index of the node
 * Return: 1 if succeeded or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nextnode = *head;
	listint_t *currentnode;

	if (*head == NULL)
		return (-1);

	while (nextnode)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(nextnode);
			return (1);
		}
		if ((i + 1) == index)
		{
			currentnode = nextnode->next;
			nextnode->next = currentnode->next;
			free(currentnode);
			return (1);
		}
		nextnode = nextnode->next;
		i++;
	}
	return (-1);
}
