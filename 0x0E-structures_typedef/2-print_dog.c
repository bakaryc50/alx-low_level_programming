#include "dog.h"

/**
 * print_dog - print the struct dog
 * @d: the attribute parameter of the type dog
 */
void printt_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		if (d->age == NULL)
			printf("Age: (nil)");
		if (d->owner == NULL)
			printf("Owner: (nil)");
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
