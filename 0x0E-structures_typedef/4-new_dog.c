#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *new_dog;
	char *n, *o;

	len1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n = malloc((len1 + 1) * sizeof(char));
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		n[i] = name[i];
	n[i] = '\0';
	new_dog->name = n;
	new_dog->age = age;
	o = malloc((len2 + 1) * sizeof(char));
	if (o == NULL)
	{
		free(n);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		o[i] = owner[i];
	o[i] = '\0';
	new_dog->owner = o;
	return (new_dog);
}
