#include "main.h"
#include <string.h>

/**
* string_toupper - function that converts string to upper
* @s1: first argument
* @s2: second argument
* Return: a string
*/

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
