#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int u, note = 0;
	unsigned long int new;

	for (u = 63; u >= 0; u--)

		new = n >> u;

	if (new & 1)
	{
		_putchar('1');
		note++;
	}
	else if (note)
		_putchar('0');
	else
		_putchar('0');
}
