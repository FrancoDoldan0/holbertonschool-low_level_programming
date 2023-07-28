#include "lists.h"
/**
*print_dlistint - funcion que printea todos los elementos
*
*@h: printea el nodo
*
*Return: count
*/

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0; /*contador*/

/*comienza el bucle cuando h no sea nulo*/
	while (h != NULL)
	{
		/*print un ent en el nodo al que apunta H del campo N*/
		printf("%d\n", h->n);
		h = h->next; /*h se va a actualizar para pasar al sigueinte nodo*/
		count++;
	}
	return (count);
}
