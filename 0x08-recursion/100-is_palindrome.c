#include "main.h"
/**
 *is_palindrome - checks if a string is a palindrome
 *@s: The string to reverse
 *Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{

	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (check_if_palindrome(s, 0, string_length_recursion(s)));
	}


}

/**
 *string_length_recursion - gets length of string
 *@s: The string whose length is to be calculated
 *Return: string length
 */


int string_length_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	else
	{
		return (1 + string_length_recursion(s + 1));
	}

}


/**
 *check_if_palindrome - recursive check for palindrome
 *
 *@s: The string to be checked
 *@k: The iterator
 *@length: String length
 * Return: The length of the string
 *
 */

int check_if_palindrome(char *s, int k, int length)
{

	if (*(s + k) != *(s + length - 1))
	{

		return (0);
	}


	if (k >= length)
	{
		return (1);
	}
	else
	{

		return (check_if_palindrome(s, k + 1, length - 1));

	}

}


