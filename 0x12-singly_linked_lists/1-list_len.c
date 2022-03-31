#include "lists.h"
/**
 * list_len - return the number of elementes in a linked list
 * @h: node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
