#ifndef DOG_H
#define DOG_H

/**
 *struct dog - short description
 *@name: dog's name
 *@age: dog's
 *@owner: owner's name
 *
 *Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
