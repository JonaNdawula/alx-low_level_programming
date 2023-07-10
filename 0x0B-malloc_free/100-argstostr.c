#include "main.h"
#include <stdlib.h>
/**
 *argstostr -  a function that concatenates all the arguments of your program.
 *@ac: integer
 *@av: a double pointer array
 *Return:0;
 */
char *argstostr(int ac, char **av)
{

	int a, b, x, y;

	char *ptr;

	x = 0, y = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			y++;
	}
	y += ac;
	ptr = malloc(sizeof(char) * y + 1);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[x] = av[a][b];
			x++;
		}
		if (ptr[x] == '\0')
			ptr[x++] = '\n';
	}
	return (ptr);
}
