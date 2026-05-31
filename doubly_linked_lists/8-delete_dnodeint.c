#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index of a dlistint_t list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index position of node to drop (starts at 0).
 *
 * Return: 1 if operation succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp == *head)
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
