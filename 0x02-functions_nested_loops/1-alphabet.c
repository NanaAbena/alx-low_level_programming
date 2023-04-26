#include "main.h"

/**
 * print_alphabet - printing lower case alphabets
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
