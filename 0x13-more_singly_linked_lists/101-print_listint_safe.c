#include "lists.h"

/**
 * list_looper - Counts the Number of unique Nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the Head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t list_l(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}

			node2 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node2 = node1->next;
			}

			return (nodes);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -function prints a listint_t list safely.
 * @head: A pointer to the Head of the listint_t list.
 *
 * Return: The Number of Nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = list_l(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
