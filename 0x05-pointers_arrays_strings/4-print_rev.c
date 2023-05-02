#include "main.h"

/**
 * print_rev - printing strings in reverse
 * @s: character to check
 * Return: 0 on a success
 */

void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
		b++;
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
