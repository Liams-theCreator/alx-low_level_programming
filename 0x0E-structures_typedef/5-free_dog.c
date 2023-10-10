#include "dog.h"
/**
 * free_dog - frees dogs from captivity
 * @d: pointer to the captive dogs
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
