#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Return: Nothing!
 */
void hash_table_print(const hash_table_t *ht)
{
	/* Declare a pointer to hash_node_t structure */
	hash_node_t *node = NULL;

	/* Declare a variable for array index */
	unsigned long int i = 0;

	/* Flag to control comma printing */
	short pr_commas = 0;

	/* Checks if the hash table is NULL */
	if (ht == NULL)
		return; /* If NULL, simply exits the function */

	printf("{");

	/* Loops through the entire hash table array */
	for (; i < ht->size; ++i)
	{
		/* Gets the node at the current position */
		node = ht->array[i];

		/* Loops through all nodes in the linked list at the current position */
		while (node)
		{
			/* Checks if a comma has been printed previously */
			if (pr_commas == 1)
				printf(", "); /* If so, prints a comma and a space */

			/* Sets the comma flag to 1 */
			pr_commas = 1;

			/* Prints the key and value of the node */
			printf("'%s': '%s'", (char *) node->key, (char *) node->value);

			/* Moves to the next node in the list */
		node = node->next;
		}
	}

	printf("}\n"); /* Prints a closing brace and a newline at the end */
}
