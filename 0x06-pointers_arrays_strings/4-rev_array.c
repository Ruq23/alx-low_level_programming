#include "main.h"

/**
* reverse_array - function to reverse an array
* @a: first argument
* @n: second argument
* Return: a reversed array
*/
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
