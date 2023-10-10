#include "dog.h"

/**
 * _strlen - return the length of a string
 * @s: the string
 * Return: the length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies a strings
 * @src: the string to copy
 * @dest: the destination
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nnew_dog;

	nnew_dog = malloc(sizeof(dog_t));
	if (nnew_dog == NULL)
		return (NULL);

	nnew_dog->name = malloc(_strlen(name) + 1);
	nnew_dog->owner = malloc(_strlen(owner) + 1);

	if (nnew_dog->name == NULL || nnew_dog->owner == NULL)
	{
		free(nnew_dog->name);
		free(nnew_dog->owner);
		free(nnew_dog);
		return (NULL);
	}

	_strcpy(nnew_dog->name, name);
	nnew_dog->age = age;
	_strcpy(nnew_dog->owner, owner);
	return (nnew_dog);
}
