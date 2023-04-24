#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int r, u;

	for (r = 48; r <= 57; r++)
	{
		for (u = 49; u <= 57; u++)
		{
			if (u > r)
			{
				putchar(r);
				putchar(u);
				{
					if ((r != 56) || (u != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
