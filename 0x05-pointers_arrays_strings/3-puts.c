#include "main.h"

/**
 * _puts - function that prints a string
 * @str: checks the length of a string
 * Return: length of a string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
