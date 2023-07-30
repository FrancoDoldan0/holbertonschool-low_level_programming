#include "lists.h"

dlistint_t
*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *lastnode = *head; /* Puntero al último nodo en la lista */
	dlistint_t *new = NULL;      /* Puntero al nuevo nodo que se agregará */

	/* Asignar memoria para el nuevo nodo */
	new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new == NULL) /* Verificar si la asignación de memoria fue exitosa */
	{
		free(new);   /* Liberar la memoria para evitar fugas de memoria */
		return (NULL); /* Devolver NULL para indicar un fallo */
	}

	/* Asignar el valor 'n' al campo 'n' del nuevo nodo */
	new->n = n;

	if (lastnode) /* Comprobar si la lista no está vacía */
	{
		while (lastnode->next) /* Recorrer la lista para encontrar el último nodo */
		{
			lastnode = lastnode->next;
		}

		/* Conectar el nuevo nodo al último nodo */
		lastnode->next = new;

		/* Establecer el puntero 'prev' del nuevo nodo al último nodo */
		new->prev = lastnode;
	}
		else
		{
	/* Si la lista está vacía, establecer el puntero*/
		/*'prev' del nuevo nodo como NULL */
			new->prev = NULL;

	/* Actualizar el puntero 'head' para que apunte al nuevo nodo,*/
			/* ya que será el único nodo en la lista */
			*head = new;
		}
/* Establecer el puntero 'next' del nuevo nodo como NULL,*/
			/*ya que será el último nodo */
	new->next = NULL;

/* Devolver el puntero al nuevo nodo (último nodo en la lista) */
	return (new);
}
