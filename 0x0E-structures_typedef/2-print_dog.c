#include "dog.h"

/**
 *print_dog - print a dog struct
 *@d: the dog struct to be printed
 *Return: nothing its void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			d->name = "(nil)";
		if (!d->owner)
			d->owner = "(nil)";
		if (!d->age)
			d->age = 0;
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
