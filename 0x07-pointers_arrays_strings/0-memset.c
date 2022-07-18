#include "main.h"
#include <string.h>

/**
* _memset - memory set function
* @s: first argument
* @b: second argument
* @n: third argument
* Return: a string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
