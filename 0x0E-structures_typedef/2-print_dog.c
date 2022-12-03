#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer of type struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
