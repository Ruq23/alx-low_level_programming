#include "main.h"
#include <string.h>

/**
* _strchr - function that locates a character in a string
* @s: first argument
* @c: second argument
* Return: a string
*/

char *_strchr(char *s, char c)
{
			int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
