#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	char *word = "_putchar";
	int m;

	for (m = 0; word[m] != '\0'; m++)
		_putchar(word[m]);
	_putchar('\n');

	return (0);
}
