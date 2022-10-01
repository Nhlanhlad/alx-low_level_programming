#include "main.h"

/**
 * factorial - prints a string followed by a new line
 * @n: number of factorial
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n ==0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
