#include <stdio.h>
/**
* main - entry point
*
* Return: Description of the returned value
*/
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number % 10 + '0');
if (number != 9)
{
putchar(44);
putchar(' ');
}
}
putchar('\n');
return (0);
}
