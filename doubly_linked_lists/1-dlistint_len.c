#include "lists.h"

/**
 *dlistint_len - function that returns the number of elements
 *@h:prints node
 *
 * Return: int len
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;/*h va a aputar al siguiente nodo.*/
		len++;
	}
	return (len);
}
