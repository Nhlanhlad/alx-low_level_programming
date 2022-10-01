#include "main.h"

/**
 * sqrt_a - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: the power of root n
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @x: squared number
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0
