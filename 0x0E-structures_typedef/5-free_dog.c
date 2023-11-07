#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees a dog structure
* @d: pointer to a dog structure
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
