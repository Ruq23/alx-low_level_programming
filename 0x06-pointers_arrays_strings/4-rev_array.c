#include "main.h"

/**
* reverse_array - function to reverse an array
* @a: first argument
* @n: second argument
* Return: a reversed array
*/
#include "main.h"

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
