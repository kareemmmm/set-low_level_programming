#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index position to insert node (starts at 0).
 * @n: Value to store inside new node.
 *
 * Return: Address of new node, or NULL if operation failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	else if (temp == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = new_node;
	temp->prev = new_node;

	return (new_node);
}
