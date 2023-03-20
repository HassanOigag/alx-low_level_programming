#include "dog.h"

/**
 *_strdup - makes a copy of a string
 *@s: the string to be copied
 *Return: the copy of the string s
 */

char *_strdup(char *s)
{
	int i = 0;
	char *new;

	if (!s)
		return (NULL);
	while (s[i])
		i++;
	new = malloc(sizeof(char) * (i + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

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
	new->name = _strdup(name);
	if (!new->name)
		return (NULL);
	new->age = age;
	new->owner = _strdup(owner);
	if (!new->owner)
		return (NULL);
	return (new);
}
