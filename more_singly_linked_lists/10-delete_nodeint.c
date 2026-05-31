#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 * @head: Double pointer to the head of the listint_t list.
 * @index: Index of the node that should be deleted (starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;

	return (1);
}
