#include "dog.h"
/**
 * init_dog - Start here
 * Desc - Write a function that initialize a variable of type struct dog
 * @d: address pointer
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

