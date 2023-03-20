#include "dog.h"

/**
 *init_dog - initializes a dog struct
 *@d: the struct to be intialized
 *@name: name value
 *@age: age value
 *@owner: owner value
 *Return: void it returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

