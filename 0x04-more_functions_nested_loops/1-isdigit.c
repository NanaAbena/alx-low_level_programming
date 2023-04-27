#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through 9
 * @c: character to check
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
		return (0);
	else
		return (1);
}
