#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
*/void *malloc_checked(unsigned int b)

{
int *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
