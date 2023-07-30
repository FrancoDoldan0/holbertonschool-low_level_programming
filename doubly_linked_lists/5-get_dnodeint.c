#include "lists.h"

dlistint_t
*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current->next != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (count != index)
		return (NULL);

	return (current);
}
