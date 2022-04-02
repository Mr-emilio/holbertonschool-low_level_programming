#include "lists.h"
/**
 * print_listint - prints the elements of linked list
 * @h: node
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
