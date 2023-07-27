#include "lists.h"

/**
 * free_list - Libera la memoria ocupada por una lista.
 * @head: Puntero al primer nodo de la lista.
 *
 * Esta función recorre la lista enlazada y libera la memoria
 * ocupada por cada nodo, incluyendo las cadenas almacenadas
 * en cada nodo.
 */
void free_list(list_t *head)
{
	/* Verifica si el puntero a la cabeza de la lista es NULL (lista vacía) */
	if (head == NULL)
	{
		free(head); /* Libera el nodo de cabeza (que es NULL en este caso) */
		return; /* Sale de la función, ya que no hay más nodos que liberar */
	}

	/* Llamada recursiva a la función para liberar el resto de la lista */
	free_list(head->next);

/*Verifica si el puntero a la str almacenada en el nodo es diferente de NULL*/
	if (head->str)
	{
		free(head->str);/*Libera la memoria ocupada por la cadena en el nodo actual*/
	}

	free(head); /* Finalmente, libera la memoria ocupada por el nodo actual */
}
