#include "main.h"
#include <stdlib.h>
/*
*/char *str_concat(char *s1, char *s2)

{
int i;
char *x = NULL;
char *as1 = s1;
char *as2 = s2;
if (as1 == NULL)
as1 = "";
if (as2 == NULL)
as2 = "";
x = as1;
while (*x++)
i++;
x = as2;
while (*x++)
i++;
i++;
x = malloc(i * sizeof(char));
if (x == NULL)
return (NULL);
i = 0;
while (*as1)
{
x[i++] = *as1++;
}
while (*as2)
{
x[i++] = *as2++;
}
x[i] = *as2;
return (x);
}
