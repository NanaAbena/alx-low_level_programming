#include "main.h"

/**
 * binary_to_uint - Converts a binary number
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[u] - '0');
	}

	return (dec_val);
}
