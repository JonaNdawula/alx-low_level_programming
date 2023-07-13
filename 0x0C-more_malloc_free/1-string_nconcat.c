#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -  a function that concatenates two strings.
 * @s1: first string
 * @s2: second string to be joined with first
 * @n:bytes to concatenate from s2 to s1
 * Return: pointer to new string
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int lengthA = 0, lengthB = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lengthA])
	{
		lengthA++;
	}
	while (s2[lengthB])
	{
		lengthB++;
	}

	if (n > lengthB)
		n = lengthB;

	c = malloc((lengthA + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);

	for (a = 0; a < lengthA; a++)
		c[a] = s1[a];

	for (b = 0; b < n; b++, a++)
		c[a] = s2[b];

	c[a] = '\0';

	return (c);


}
