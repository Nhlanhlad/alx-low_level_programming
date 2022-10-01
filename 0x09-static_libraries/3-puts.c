#include "main.h"

/**
 * _puts - check the pointer of a parameter
 * @str: validate the character
 * Return: Always 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
