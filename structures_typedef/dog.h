#ifndef dog_h
#define dog_h

/**
* struct dog - structure dog definition
* @name: character string
* @age: integrer
* @owner: character string
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
