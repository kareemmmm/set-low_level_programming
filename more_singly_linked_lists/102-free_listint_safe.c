#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (handles loops).
 * @h: Double pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr, *next, *slow, *fast;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			fast = slow;
			while (1)
			{
				curr = *h;
				if (curr == fast)
				{
					next = curr->next;
					free(curr);
					count++;
					*h = next;
					break;
				}
				*h = (*h)->next;
				free(curr);
				count++;
			}
			*h = NULL;
			return (count);
		}
	}

	curr = *h;
	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		count++;
		curr = next;
	}
	*h = NULL;

	return (count);
}
