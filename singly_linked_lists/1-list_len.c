#include "lists.h"

/**
 * list_len - Devuelve el número de elementos en una lista enlazada.
 * @h: Puntero al inicio de la lista enlazada.
 *
 * Return: El número de elementos en la lista enlazada.
 */
size_t list_len(const list_t *h)
{
	/* Inicializar una variable para contar los elementos */
	size_t count = 0;

	/* Recorrer la lista enlazada */
	while (h != NULL)
	{
		/* Incrementar el contador por cada elemento */
		count++;

		/* Mover al siguiente nodo */
		h = h->next;
	}

	/* Devolver el conteo final que representa el número de elementos */
	return (count);
}
