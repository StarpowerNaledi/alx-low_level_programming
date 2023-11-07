#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the struct dog
 * @d: struct
 * Return nil is element is NULL
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else 
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("(nil)\n")
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}