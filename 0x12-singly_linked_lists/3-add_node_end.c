#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: the first node in the linked list
 * @str: the content of the node to be added
 *
 * Return: the address of the new element
 * or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t str_size = 0;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (str[str_size])
		str_size++;
	new->len = str_size;
	new->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
