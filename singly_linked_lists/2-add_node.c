#include "lists.h"

/**
 * add_node - función que agrega un nuevo nodo al principio de la lista.
 * @head: Puntero al puntero del inicio de la lista.
 * @str: Cadena a almacenar en el nuevo nodo.
 *
 * Return: Puntero al nuevo nodo.
 */
list_t *add_node(list_t **head, const char *str)
{
	/*Declarar un puntero para el nuevo nodo*/
	list_t *new = NULL;

	/*Asignar memoria para el nuevo nodo*/
	new = (list_t *)malloc(sizeof(list_t));

	/*Comprobar si la asignación de memoria fue exitosa*/
	if (new == NULL)
	{
		/*Liberar la memoria y retornar NULL en caso de error*/
		free(new);
		return (NULL);
	}

	/*Duplicar la cadena y almacenar su longitud en el nuevo nodo*/
	new->str = strdup(str);
	new->len = strlen(str);

	/*Establecer el puntero "next" del nuevo nodo*/
	/*para que apunte al nodo principal actual*/
	new->next = *head;

		/*El nuevo nodo se convierte en el nodo principal,*/
	/*actualizamos el puntero head para que apunte al nuevo nodo*/
	*head = new;

	/*Devolver el puntero al nuevo nodo*/
	return (*head);
}
