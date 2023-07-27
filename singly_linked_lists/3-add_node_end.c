#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*add_node_end - Agrega un nuevo nodo al final de la lista.
* @head: Puntero al puntero que apunta a la cabeza de la lista.
* @str: Cadena que se va a almacenar en el nuevo nodo.
* Return: Puntero al último nodo de la lista. *
*/
list_t *add_node_end(list_t **head, const char *str)
{
	/* Puntero temporal para recorrer la lista y encontrar el último nodo. */
	list_t *lastnode = *head;
	list_t *new = NULL; /* Nuevo nodo que se va a añadir al final. */

	/* Asignación de memoria para el nuevo nodo. */
	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
	{
	/* Si la asignación de memoria falla,*/
/*liberamos el espacio previamente asignado. */
		free(new);
		/* Retornamos NULL para indicar el fallo en la creación del nuevo nodo. */
		return (NULL);
	}

/* Copiamos la cadena proporcionada al nuevo nodo. */
	new->str = strdup(str);
	/* Obtenemos la longitud de la cadena y la almacenamos en el nuevo nodo. */
	new->len = strlen(str);

	if (*head == NULL)
	{
					/* Si la lista está vacía*/
		/*el nuevo nodo se convierte en la cabeza de la lista. */
		*head = new;
		return (*head);
	}

	while (lastnode->next != NULL)
	{
/* Recorremos la lista hasta encontrar el último nodo. */
		lastnode = lastnode->next;
	}
/* Establecemos el puntero "next" del último nodo al nuevo nodo*/
				/*añadiéndolo al final. */
	lastnode->next = new;

/* Retornamos el puntero al último nodo (que ahora es el nuevo nodo). */
	return (lastnode->next);
}
