#include <stdlib.h>
#include "dog.h"

/**
*free_dog - Function  that free dogs
*@d: type pointer struct data
*return: 0
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
