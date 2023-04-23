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
	char letter = 'z';

	do {
		putchar(letter);
		letter--;
	} while (letter >= 'a');

	putchar('\n');

	return (0);
}
