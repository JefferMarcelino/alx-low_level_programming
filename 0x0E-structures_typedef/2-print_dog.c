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
		printf("Name: %s\n", (d->name ? d->name : "(nil)"));

		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		printf("Owner: %s\n", (d->owner ? d->owner : "nil"));
	}
}
