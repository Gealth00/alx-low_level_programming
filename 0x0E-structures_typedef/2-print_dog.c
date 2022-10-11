#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a dog struct
 * @d: struct dog
 *
 * Return: no return
*/
void print_dog(struct dog *d)
{
	if(d)
	{
		if(!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if(!(d->owner))
			printf("Owner: (nil)\n");
		else
		printf("Owner: %s\n", d->age);

		printf("Age: %f\n", d->owner);
	}
}
