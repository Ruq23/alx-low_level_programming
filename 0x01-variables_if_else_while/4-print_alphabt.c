#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, except q and e
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar (ch);
}

putchar (10);
return (0);
}
