#include "main.h"
#include "dog.h"

/**
 * init_dog - function that gives a name, age and owner to a dog
 *
 * @d: the pointer to a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
