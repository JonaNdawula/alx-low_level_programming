#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints
 *@format: list of arguments passed
 *
 */

void print_all(const char * const format, ...)
{
	int ind = 0;
	char *st, *separator = "";

	va_list argList;

	va_start(argList, format);

	if (format)
	{
		while (format[ind])
		{
			switch (format[ind])
			{
				case 'c':
					printf("%s%c", separator, va_arg(argList, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(argList, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(argList, double));
					break;
				case 's':
					st = va_arg(argList, char *);
					if (st == NULL)
					st = "(nil)";
					else
					printf("%s%s", separator, st);
					break;
					default:
					ind++;
					continue;
			}
					separator = ", ";
					ind++;
		}
	}

		printf("\n");
		va_end(argList);
}
