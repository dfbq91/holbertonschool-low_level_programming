#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int firstlen(char *s1);


/**
 * firstlen - get len of a string.
 * @s1: string to get the lenght
 * Return: len of a string.
 */

int firstlen(char *s1)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcpy - copy a string into a buffer pointed
 * @dest: char type array pointer
 * @src: char type integer variable
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog struct.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to a struct or NULL if functions fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lename, lenowner;
	dog_t *dogn;

	if (name == NULL || owner == NULL)
		return (NULL);

	lename = firstlen(name) + 1;
	lenowner = firstlen(owner) + 1;

	dogn = malloc(sizeof(dog_t));
	if (dogn == NULL)
		return (NULL);

	dogn->name = malloc(lename);
	if (dogn->name == NULL)
	{
		free(dogn);
		return (NULL);
	}

	dogn->owner = malloc(lenowner);
	if (dogn->owner == NULL)
	{
		free(dogn->name);
		free(dogn);
		return (NULL);
	}

	dogn->name = _strcpy(dogn->name, name);
	dogn->owner = _strcpy(dogn->owner, owner);
	dogn->age = age;

	return (dogn);
}
