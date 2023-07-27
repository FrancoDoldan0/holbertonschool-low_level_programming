#include "lists.h"
/**
*free_list - Function that free a list
*
*@head: head
*
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
		return;
	}
free_list(head->next);

	if (head->str)
	{
		free(head->str);
	}
	free(head);
}
