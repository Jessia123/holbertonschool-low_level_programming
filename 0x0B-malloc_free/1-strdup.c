#include "main.h"
#include <stdlib.h>
/*
 */char *_strdup(char *str)

{
char *x = str;
int count = 0;
if (str == NULL)
return (NULL);
while (*x++ != '\0')
count = count + 1;
x = malloc((count + 1) * sizeof(char));
if (x == NULL)
return (NULL);
count = 0;
while (*str)
x[count++] = *str++;
x[count] = *str;
return (x);
}
