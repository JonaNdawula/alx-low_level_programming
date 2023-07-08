#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *numberChecker - checks if there is number in string
 *@s: an Array
 *Return: Always 0
 **/

int numberChecker(char *s)
{


	unsigned int counter;

	for (counter = 0; counter < strlen(s); counter++)
	{

		if (!isdigit(s[counter]))
		{
			return (0);
		}


	}

	return (1);

}

/**
 *main - prints program name
 *@argc: Argument count
 *@argv:Arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int counter2;
	int stringToInteger;
	int sum = 0;

	for (counter2 = 1; counter2 < argc; counter2++)
	{
		if (numberChecker(argv[counter2]))
		{

			stringToInteger = atoi(argv[counter2]);

			sum += stringToInteger;

		}
		else
		{

			printf("Error\n");
			return (1);

		}

	}
	printf("%d\n", sum);
	return (0);
}
