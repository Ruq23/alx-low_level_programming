#include "main.h"

/**
* _puts - prints a string, followed by a new line to stdout
* @str: first int integer
* Return: a string followed by a new line
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str)
	}
	_putchar('\n')
}
