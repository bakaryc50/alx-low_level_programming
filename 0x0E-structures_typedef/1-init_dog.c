#include "dog.h"

/**
 * init_dog - the function that initializes a variable of type struct dog
 * @d: the attribute parameter of the type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = "Milou";
	d->age = 30;
	d->owner = "Bakary CAMARA"

}
