#include "dog.h"

/**
 *free_dog - free a dog structure
 *@d: the dog struct to be freed
 *Return: nada
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
