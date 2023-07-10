#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: ptr joining s1 to s2
 *
 */
char *str_concat(char *s1, char *s2)
{
	int x, y;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = 0, y = 0;
	do {
		x++;
	} while (s1[x] != '\0');
	do {
		y++;
	} while (s2[y] != '\0');
	ptr = malloc((x + y + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	x = y = 0;
	do {
		ptr[x] = s1[x];
		x++;
	} while (s1[x] != '\0');

	do {
		ptr[x] = s2[y];
		x++, y++;
	} while (s2[y] != '\0');

	ptr[x] = '\0';

	return (ptr);
}
