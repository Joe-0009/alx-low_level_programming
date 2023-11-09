#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curent = *h;
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	
	while (h != NULL)
	{
		printf("%d%", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
