#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Exit failute or exit success
 */
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	if (write(STDERR_FILENO, "and that piece of art is useful\" - "
			  "Dora Korpar, 2015-10-19\n", 58) != 58)
	{
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}
