#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * free_dog - function that free a dog
 *
 * @d: the pointer to a dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d->name != 0)
		free(d->name);

	if (d->owner != 0)
		free(d->owner);

	free(d);
}
