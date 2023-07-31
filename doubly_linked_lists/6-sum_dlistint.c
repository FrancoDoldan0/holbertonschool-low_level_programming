#include "lists.h"

int
sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
/*agrega el valor del nodo a la suma*/
		head = head->next;
	}

	return (sum);
}
