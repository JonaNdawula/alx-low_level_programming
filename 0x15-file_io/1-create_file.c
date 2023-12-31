#include "main.h"

/**
 *create_file - a function that creates a file
 *
 *@filename: points to file to be created
 *@text_content: poinst to string to be written in file
 *
 *Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{

	int fileDef, wr;
	int length = 0;

	if (filename == NULL)
	{

		return (-1);
	}
	if (text_content != NULL)
	{

		while (text_content[length] != '\0')
		{
			length++;
		}
	}

	fileDef = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fileDef, text_content, length);

	if (fileDef == -1)
	{
		return (-1);
	}
	if (wr  == -1)
	{
		return (-1);
	}

	close(fileDef);

	return (1);

}
