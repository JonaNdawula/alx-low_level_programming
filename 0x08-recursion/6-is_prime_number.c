#include "main.h"
/**
 *is_prime_number - checks if an int is a  prime number
 *
 *@n: number to be checked
 *Return: 1 if n is a prime number 0 if not prime
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);

	}
	else
	{
		return (checkout_if_is_prime(n, n - 1));
	}



}


/**
 *checkout_if_is_prime - checkout if number is prime
 *
 *@n: number to checkout
 *@k: iterator
 *Return: 1 if n is a prime number 0 if not prime
 */
int checkout_if_is_prime(int n, int k)
{

	if (k == 1)
	{
		return (1);

	}

	if (n % k == 0 && k > 0)
	{
		return (0);

	}
	else
	{
		return (checkout_if_is_prime(n, k - 1));

	}

}
