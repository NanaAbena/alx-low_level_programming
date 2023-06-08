#include "main.h"

/**
 * get_endianness - checks if a machine is little or big in endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int u = 1;
	char *e = (char *) &u;

	return (*e);
}
