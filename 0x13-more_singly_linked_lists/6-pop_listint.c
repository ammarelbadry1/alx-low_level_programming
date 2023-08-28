#include "lists.h"

/**
 * pop_listint - delestes the head node of a listint_t list
 *
 * @head: a pointer to the Head pointer of the linked list
 *
 * Return: the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	int temp_int;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp_int = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp_int);
}
