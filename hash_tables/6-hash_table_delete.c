#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Elimina una tabla hash
 * @ht: La tabla hash a liberar
 *
 * Return: Nada
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Verifica si la tabla hash o el array son nulos */
	if (ht == NULL || ht->array == NULL)
		return;

	/* Recorre todo el array de la tabla hash */
	for (unsigned long int i = 0; i < ht->size; ++i)
	{
		hash_node_t *node = ht->array[i];

		/* Recorre la lista enlazada en la posición actual del array */
		while (node)
		{
			hash_node_t *temp = node;

			node = node->next;

			/* Libera la memoria de la clave, el valor y el nodo actual */
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* Libera la memoria del array y la tabla hash completa */
	free(ht->array);
	free(ht);
}
