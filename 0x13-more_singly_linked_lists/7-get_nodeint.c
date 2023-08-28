#include "lists.h"

/**
 * get_nodeint_at_index - searches for a specific node at some existent index
 *
 * @head: Head pointer of the linked list
 * @index: the position of the node to be found
 *
 * Return: the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *target_node;

	target_node = head;
	i = 0;
	while ((i < index) && (target_node != NULL))
	{
		target_node = target_node->next;
		i++;
	}
	return (target_node);
}
