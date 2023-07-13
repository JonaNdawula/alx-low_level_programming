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

	unsigned int a, b, lengthA, lengthB;

	b = 0, lengthA = 0, lengthB = 0;

	do {
		lengthA++;
	} while (s1 && s1[lengthA]);
	do {
		lengthB++;
	} while (s2 && s2[lengthB]);
	if (n < lengthB)
		c = malloc((lengthA + n + 1) * sizeof(char));
	else
		c = malloc((lengthA + lengthB + 1) * sizeof(char));

	if (!c)
		return (NULL);

	for (a = 0; a < lengthA; a++)
		c[a] = s1[a];

	for (; n < lengthB && a < (lengthA + n); a++)
		c[a] = s2[b++];
	for (; n >= lengthB && a < (lengthA + lengthB); a++)
		c[a] = s2[b++];

	c[a] = '\0';
	return (c);
}
