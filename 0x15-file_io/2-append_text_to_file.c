#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *
 *@filename: points to file name
 *@text_content:string to be added in file
 *
 * Return: 1 if file exists else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fileOpen, wr;
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
	fileOpen = open(filename, O_WRONLY | O_APPEND);

	wr = write(fileOpen, text_content, length);

	if (fileOpen == -1)
	{
		return (-1);
	}

	if (wr == -1)
	{
		return (-1);
	}

	close(fileOpen);

	return (1);
}
