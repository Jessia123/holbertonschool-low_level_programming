#include "function_pointers.h"

/**
 *  * @f: pointer function
 *   *
 *    */

void print_name(char *name, void (*f)(char*))
{
		if (name != NULL && f != NULL)
				{
								f(name);
									}
}
