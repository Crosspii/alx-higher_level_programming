#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int i,j;
	char htens,hunits,mtens,munits;

	for (i = 0; i < 24; i++)
	{
		htens = i / 10 + '0';
		hunits = i % 10 + '0';

		for (j = 0; j < 60; j++)
		{
			mtens = j / 10 + '0';
			munits = j % 10 + '0';

			_putchar(htens);
			_putchar(hunits);
			_putchar(':');
			_putchar(mtens);
			_putchar(munits);
			_putchar('\n');
		}
	}
}
