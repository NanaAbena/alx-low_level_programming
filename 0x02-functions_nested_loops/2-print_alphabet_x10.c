#include "main.h"

/**
 * print_alphabet_x10 - printing lower case alphabets 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char alpha;
	int n = 0;

	while (n++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
