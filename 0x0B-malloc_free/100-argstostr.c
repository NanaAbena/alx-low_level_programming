#include "main.h"
#include <stdlib.h>
/**
 * argstostr - links arguments for the program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m, n, o = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (m7 = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			str[o] = av[m][n];
			o++;
		}
		if (str[o] == '\0')
		{
			str[o++] = '\n';
		}
	}
	return (str);
}
