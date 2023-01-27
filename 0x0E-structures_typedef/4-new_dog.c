#include <stdlib.h>
#include "main.h"
#include "dog.h"

/**
 * _strlen - function thatc count the chars from a string
 *
 * @str: the string
 *
 * Return: the string lenght
 */

int _strlen(char *str)
{
	if (*str == 0 || str == 0)
		return (0);
	str++;
	return (1 + _strlen(str));
}

/**
 * _strcpy - function that copy the content from src to dest
 *
 * @dest: the content receiver
 * @src: the content
 *
 * Return: the pointer to the new string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;

	return (dest);
}

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
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);

	dog = malloc(sizeof(dog));
	if (dog == 0)
	{
		free(dog);
		return (0);
	}

	dog->name = malloc(sizeof(*name) * (_strlen(name) + 1));
	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(*owner) * (_strlen(owner) + 1));
	if (dog->owner == 0)
	{
		free(dog->name);
		free(dog);
		return (0);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
