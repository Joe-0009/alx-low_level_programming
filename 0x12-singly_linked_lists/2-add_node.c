#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));;
	if (new_node = NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	new_ned->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node->next; 

	
	
	return (new_node);

}
