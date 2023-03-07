#include "dog.h"

/**
 *  *
 *   * betty style coding comment
 *    *
 *     */

void free_dog(dog_t *d)
{
		if (d != NULL)
				{
							free(d->name);
									free(d->owner);
											free(d);
												}
}
