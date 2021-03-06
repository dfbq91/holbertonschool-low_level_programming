#ifndef DOG_H
#define DOG_H

/**
* struct dog - struct about dog elements
* @name: Name of dog
* @age: Age of dog
* @owner: Owner of the dog
* Description: struct about dog description to be used in another functions
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
