#include "main.h"
#include <stdlib.h>
/**
 *strtow - a function that concatenates all the arguments of your program.
 *@str: given string
 *Return: pointer to array
 */
char **strtow(char *str)
{
	char **ptr1, *ptr0;
	int i, j, length, w, m, st, en;

	j = 0, length = 0, m = 0;
	do {
		length++;
	} while (*(str + length));
	w = word_counter(str);
	if (w == 0)
		return (NULL);
	ptr1 = (char **)malloc(sizeof(char *) * (w + 1));
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (m)
			{
				en = i;
				ptr0 = (char *)malloc(sizeof(char) * (m + 1));
				if (ptr0 == NULL)
					return (NULL);
				while (st < en)
					*ptr0++ = str[st++];
				*ptr0 = '\0';
				ptr1[j] = ptr0 - m;
				j++;
				m = 0;
			}
		}
		else if (m++ == 0)
			st = i;
	}
	ptr1[j] = NULL;
	return (ptr1);
}
/**
 * word_counter - function to count words in string
 *@x: given string
 *Return: word number
 */
int word_counter(char *x)
{
	int y, a, b;

	y = 0, b = 0;

	for (a = 0; x[a] != '\0'; a++)
	{
		if (x[a] == ' ')
		{
			y = 0;
		}
		else if (y == 0)
		{
			y = 1;
			b++;
		}

	}
	return (b);

}
