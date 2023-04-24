#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1 for success
 */

int main(void)
{
	char *dora = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, dora, 59);

	return (1);
}
