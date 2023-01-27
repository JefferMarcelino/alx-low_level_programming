#include <stdlib.h>
#include "main.h"
#include "dog.h"

void free_dog(dog_t *d)
{
	if (d->name != 0)
		free(d->name);

	if (d->owner != 0)
		free(d->owner);

	free(d);
}
