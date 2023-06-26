#include "main.h"
#include <string.h>
/**
 *rev_string - function that reverses a string
 *
 *@s: string to be manipulated
 *
 */
void rev_string(char *s)
{

	int length = strlen(s);

	int x, y;

	for (x = 0, y = length - 1;  x < y; x++, y--)
	{
		char tem = s[x];

		s[x] = s[y];
		s[y] = tem;

	}



}
