#include <stdio.h>
#include "dog.h"

/**
 * print_dog - program that prints its name.
 * @d: array of character pointer.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d == NULL)
	{
		printf("(nil)");
	}
	if ((*d).name == '\0')
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}

}
