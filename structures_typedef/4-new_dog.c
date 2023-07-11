#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(i + 1);
	if (dog->name == NULL)
		return (free(dog), NULL);

	dog->owner = malloc(j + 1);
	if (dog->owner == NULL)
		return (free(dog->name), free(dog), NULL);

	for (i = 0; name[i]; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	for (j = 0; owner[j]; j++)
		dog->owner[j] = owner[j];
	dog->owner[j] = '\0';

	return (dog);
}
