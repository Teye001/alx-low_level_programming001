#include <stdlib.h>
#include "dog.h"

/**
 *free_dog -frees dogs
 *@d: pointer to dog free
 *
 * Return:void
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(D->owmer);
		free(d);
	}
}
