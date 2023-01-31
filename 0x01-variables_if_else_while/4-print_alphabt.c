#include <stdio.h>
/**
* main - entry point
*
* Return: Description of the returned value
*/
int main(void)
{
char letter;
{
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'e' && letter != 'q')
putchar(letter);
putchar('\n');
}
return (0);
}

