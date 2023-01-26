#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * new_dog - function that creates a dog
 *
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: the pointer to the dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
