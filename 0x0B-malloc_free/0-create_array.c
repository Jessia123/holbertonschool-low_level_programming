#include "main.h"
#include <stdlib.h>
/*
 */char *create_array(unsigned int size, char c)

{
char *x;
int i = 0;
if (size == 0)
return (NULL);
x = malloc(sizeof(char) * size);
if (x == NULL)
return (NULL);
while (size--)
{
x[i++] = c;
}
return (x);
}
