#include "lists_h"
/**
  * print_list - Prints all elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */

size_t print_list(const list_t *h)
{
	/*Se crea una variable llamada 'count' para contar los nodos en la lista.*/
	size_t count = 0;

	/*Se inicia un bucle 'while' que recorre la lista*/
		/*mientras el puntero 'h' no sea NULL.*/
	while (h != NULL)
	{
		/*Dentro del bucle, se verifica si el campo 'str' del nodo actual es NULL.*/
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*Se actualiza el puntero 'h' para apuntar al siguiente nodo en la lista.*/
		h = h->next;

		/*Se incrementa el contador de nodos*/
		count++;
	}
	/*La función devuelve el valor de 'count',*/
	/*que representa la cantidad de nodos en la lista.*/
	return (count);
}
