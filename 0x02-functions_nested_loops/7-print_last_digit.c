#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @u: computes the last digit of a number
 * Return: Last digit
 */
int print_last_digit(int u)
{
	int last_digit;

	last_digit = u %  10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
