#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	int i = 0;

	if (head == NULL)
		return (NULL);

	while (tmp->prev != NULL)
		temp = tmp->prev;

	while (temp != NULL)
	{
		if (i == index)
			break;
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
