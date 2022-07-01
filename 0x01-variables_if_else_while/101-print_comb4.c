#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * numbers must be separated by ,, followed by a space
 * Return 0 always
*/

int main(void)
{
int ch;
int n;
int p;
for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
for (p = 50; p <= 57; p++)
{
if (n > ch && p > n)
{
putchar (ch);
putchar (n);
putchar(p);
if (ch != 55 || n != 56 || p != 57)
{
putchar(44);
putchar(32);
}
}
}
}
}

return (0);
}
