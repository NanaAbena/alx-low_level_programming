#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Let us print all possible contributions
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

int main(void)
{
	int b, c;

	for (b = 0; b <= 9; b++)
	{
		for (b = c;  c <= 9; c++)
		{
			putchar(b + '0');
			putchar(c + '0');
			if (b != 9 ||  b != 9)
			{
				putchar(',');
				putchar(',');
			}
		}
	}


	putchar('\n');

	return (0);
}
