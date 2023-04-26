#include "main.h"

/**
 * jack_bauer - prints all minutes in a day from 00:00
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					if (m == 2 && m > 3)
					{
						break;
					}
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar(':');
					_putchar(o + '0');
					_putchar(p + '0');
					_putchar('\n');
				}
			}
		}
	}
}
