#include "main.h"

/**
* swap_int - swaps the value of two integers
* @a: first int
* @b: second int
* Return: swapped values for two integers
*/
void swap_int(int *a, int *b)
{
int swp;
swp = *a;
*a = *b;
*b = swp;
}
