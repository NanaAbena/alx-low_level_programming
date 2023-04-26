#include "main.h"

/**
 * _isalpha - Checking for alphabetic character
 * @c: the checker
 * Return: 1 if c is a letter, lowercase or upper case 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
