#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d dog: The character to print
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Initialized variable.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
