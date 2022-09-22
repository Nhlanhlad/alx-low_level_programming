#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of intergers
 *
 * @a: a is the array
 * @n: n is the number of elements of array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, Aux;

	n = n - 1;
	while (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
