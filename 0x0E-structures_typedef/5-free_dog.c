#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int firstlen(char *s1);


/**
 * free_dog - free dogs.
 * @d: dog struct
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	if (d =! NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
