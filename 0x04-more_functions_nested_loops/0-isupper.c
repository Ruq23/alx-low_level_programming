#include "main.h"

/**
* _isupper  - checks for upper case chars
* @c: a parameter
* Return: something based on condition
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
