#include "main.h"

/**
* more_numbers - print then times numbers, from 0 - 14 n
* Return: Success multiplication
*/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
