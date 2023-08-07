#include "main.h"

/**
 *create_file - a function that creates a file.
 *
 * @filename: points to file to be created
 * @text_content:points to string to be written in file
 *
 * Return:1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fileDef;
	ssize_t length = 0, wr;


	if (filename  == NULL)
	{
		return (-1);
	}

	fileDef = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fileDef == -1)
	{
		return (-1);
	}


	length = strlen(text_content);

	wr = write(fileDef, text_content, length);

	if (text_content != NULL)
	{

		if (wr == -1)
		{
			close(fileDef);
			return (-1);
		}
	}

	if (close(fileDef == -1))
	{
			return (-1);
	}

			return (1);
}
