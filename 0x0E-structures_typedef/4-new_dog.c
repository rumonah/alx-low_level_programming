#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int my1, my2;

	my1 = strlen(name);
	my2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (my1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (my2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

/**
 * _strlen - return string length
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int new;

	new = 0;

	while (s[new] != '\0')
	{
		new++;
	}

	return (new);
}

/**
 **_strcpy - copies string pointer to by src include
 * the terminationing null bytes (\0) to the buffer pointer
 * @dest: pointer to the buffer in which  we copy the string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int mynew, r;

	mynew = 0;

	while (src[mynew] != '\0')
	{
		mynew++;
	}

	for (r = 0 ; r < mynew ; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';

	return (dest);
}
