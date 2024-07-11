#include "main.h"

int try_prime(int n, int i);

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * otherwise returns 0
 * @n: the number to check
 * Return: 1 if n is a prime number , 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (try_prime(n, 2));
}

/**
 * try_prime - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor
 * Return: 1 if n is a prime, 0 otherwise
 */
int try_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (try_prime(n, i + 1));
}
