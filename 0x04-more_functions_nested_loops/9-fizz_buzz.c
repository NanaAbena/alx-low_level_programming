#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the number 1 - 100
 *  with Fizz for multiples of 3, Buzz for multiples of 5and
 *  FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (1 % 3 == 0)
			printf("Fizz");
		else if
			(i % 5 == 0);
		printf("Buzz");
		else
		printf("%i", i);
	}
printf("\n");
return (0);
}
