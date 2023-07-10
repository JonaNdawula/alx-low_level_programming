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
	unsigned int a, b, si = 0;
	char *str;

	if (s1 != NULL)
		for (a = 0; s1[a] != '\0'; a++)
			si++;
	if (s2 != NULL)
		for (a = 0; s2[a] != '\0'; a++)
			si++;
	str = malloc(sizeof(char) * (si + 1));
	if (str == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
	{
		str[0] = '\0';
		return (str);
	}
	if (s1 != NULL)
		for (a = 0; s1[a] != '\0'; a++)
			str[a] = s1[a];
	if (s1 == NULL)
		a = 0;
	if (s2 != NULL)
		for (b = 0; s2[b] != '\0'; b++)
		{
			str[a] = s2[b];
			a++;
		}
	str[si] = '\0';
	return (str);
}

