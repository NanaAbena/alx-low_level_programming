#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: checks for the length of a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0; /*  start the counter from 0 */

	for (; *s++;)
		a++;
	return (a);
}
