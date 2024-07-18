#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: the string  to check
 * Return: 1 if the string is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit((unsigned char)str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 if any argument if not a positive number
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
