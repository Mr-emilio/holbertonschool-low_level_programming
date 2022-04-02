#include "lists.h"
/**
 * listint_len - return numbers of elements of linked list
 * @h: node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
