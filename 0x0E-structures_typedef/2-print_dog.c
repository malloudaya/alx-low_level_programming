#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: variable pointing to struct dog to print elements of
 */
void print_dog(struct dog *d)
{
	if  (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)\n");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
