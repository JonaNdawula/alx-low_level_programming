#include "main.h"
#include <stdio.h>
/**
 *_atoi - coverts strings to integer
 *
 *@s: string to converted
 *
 *Return: the int coverted from from the string
 */
int _atoi(char *s)
{
	int i, d, n, length, f, digit;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;

			f = 0;
		}
		i++;


	}
	if (f == 0)
		return (0);

	return (n);

}


/**
 *main - it will multiply 2 numbers
 *@argc: represents number of arguments
 *@argv: represents an array of arguments
 *Return: 0 else 1
 */
int main(int argc, char *argv[])
{

	int res, a, b;

	if (argc < 3 || argc > 3)
	{

		printf("Error\n");

		return (1);

	}
	else
	{

		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);


	}



}
