#include "main.h"

/**
* print_sign - prints the ign of a number 
* @n: arguments based on conditions
* Return: 1, 0, -1 
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return 0;
}
else
{
_putchar('-');
return (-1);
}
}
