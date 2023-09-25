#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (NULL);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("\n");

	return (nodes);
}