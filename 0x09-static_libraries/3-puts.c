#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: pointer to the string to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
