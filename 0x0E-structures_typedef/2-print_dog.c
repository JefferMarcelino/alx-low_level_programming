#include <stdio.h>
#include "main.h"
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: the pointer to the struct dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		printf("Name: %s\n", (d->name != 0 ? d->name : "(nil)"));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != 0 ? d->owner : "(nil)"));
	}
}
