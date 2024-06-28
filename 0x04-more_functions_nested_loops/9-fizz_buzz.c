#include "main.h"
#include <stdio.h>

/**
 * fizzbuzz - prints numbers from 1 to 100 replacing multiples of 3 with "fizz"
 * and multiples of 5 with "buzz" and multiples of both with "fizzbuzz"
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
