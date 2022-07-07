#include "main.h"

/**
* print_most_numbers - print numbers from 0 - 9 except 2 & 4
* Return: Success
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	if (x != 2 && x != 4)
	_putchar(x + '0');
	}
	_putchar('\n');
}
