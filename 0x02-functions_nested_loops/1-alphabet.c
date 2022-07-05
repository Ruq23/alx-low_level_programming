#include "main.h"

/**
* print_alphabet  - prints alphabets in lowercase
* Return: 0 if exited properly, non-zero otherwise
*/

void print_alphabet(void)
{
int j;
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
return (0);
}
