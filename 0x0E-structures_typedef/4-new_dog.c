#include "dog.h"

/**
 *new_dog - creates a new dog type
 *@name: the dog's name
 *@age: the dog's age
 *@owner: the dog's onwer
 *Return: a new dog_t struct
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = (dog_t *) malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
