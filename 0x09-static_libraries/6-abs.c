#include "main.h"

/**
 * _abs - prints out the absolute value of an integer
 * @a: the integer to compute its absolute value
 * Return: the abs value
 */
int _abs(int a)
{
	int u = a;
	int absvalue;

	if (u < 0)
	{
		u = u * (-1);
	}
	absvalue = u;
	return (absvalue);
}
