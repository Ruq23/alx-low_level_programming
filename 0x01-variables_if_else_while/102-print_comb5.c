#include <stdio.h>
/**
* main - prints all possible combinations of two two-digit numbers
* The two numbers should be separated by a space
* Return: 0 always
*/

int main(void)
{
int ch;
int n;
for (ch = 48; ch <=57; ch++)
{
for (n =49; n <= 57; n++)
{
if (ch < n)
{
putchar((ch /10) + 48);
putchar((ch % 10) + 48);
putchar(' ');
putchar((n / 10) + 48);
putchar((j % 10) + 48);
if (ch != 98 || n != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n')
return (0)
}
