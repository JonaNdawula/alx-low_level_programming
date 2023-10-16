#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring.
 *@haystack: string
 *@needle: substring
 *Return: haystack otherwise NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *ned = needle;

		while (*ned != '\0' && *hay == *ned)
		{
			hay++;
			ned++;

		}

		if (*ned == '\0')
		{
			return (haystack);

		}

		haystack++;

	}

	return (NULL);
}
