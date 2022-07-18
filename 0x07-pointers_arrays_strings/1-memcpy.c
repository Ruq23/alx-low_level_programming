#include "main.h"
#include <string.h>

/**
* _memcpy - function that copies memory area
* @dest: first argument
* @src: second argument
* @n: third argument
* Return: a string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
