#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u, count = 0;
	unsigned long int new;
	unsigned long int unique = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		new = unique >> u;
		if (new & 1)
			count++;
	}

	return (count);
}
