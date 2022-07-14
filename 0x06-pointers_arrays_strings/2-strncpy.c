#include "main.h"
#include <string.h>
/**
* *_strncpy - function stract
* @dest: first argument
* @src: second argument
* @n: third argument
* Return: a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
