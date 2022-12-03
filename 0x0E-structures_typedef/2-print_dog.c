#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer of type struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
