#include "main.h"

/**
* _isalpha - check for alphabets
* @c: a character argument
* Return: 0 and 1 based on conditionals
*/

int _isalpha(int c)
{
return (
(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z)
);
}
