#include "main.h"
/**
 _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: length of buffer
 * Return: New string
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	while (i < n)
	{
		*(s + i) = b;
	}
	return (s);
}
