#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: number
 * @y: number of power
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else id ( y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
