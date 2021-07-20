#include "dog.h"

/**
 * new_dog - the function that creates a new do
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a dog, or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(dog_t);

	if (new == NULL)
		return (NULL);
	else
	{
		new->name = name;
		new->age = age;
		new->owner = owner;
	}

	return (new);

}
