#include <stdio.h>

/**
* main - prints all possible different combinations of three digits
* Return: Always 0
*/
int main(void)
{
int ch, n, p;

for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
for (p = 50; p <= 57; p++)
{
if (p > n && n > ch)
{
putchar (ch);
putchar (n);
putchar(p);
if (ch != 55 || n != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}

putchar('\n');
return (0);
}
