#include "lists.h"

/**
 * reverse_listint -function reverses a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1, *node2;

	if (head == NULL || *head == NULL)
		return (NULL);

	node2 = NULL;

	while ((*head)->next != NULL)
	{
		node1 = (*head)->next;
		(*head)->next = node2;
		node2 = *head;
		*head = node1;
	}

	(*head)->next = node2;

	return (*head);
}
