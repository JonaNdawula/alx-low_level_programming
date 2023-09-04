#include "main.h"

/**
 *read_textfile - reads text file and prints it to the POSIX standard output
 *
 *@filename: file with text to read
 *@letters: letters in the text to rea
 *
 *Return: number of bytes read and printed
 */

ssize_t read_textfile(const  char *filename, size_t letters)
{

	ssize_t rd;
	ssize_t wr;
	ssize_t fileDef;
	char *buffer;

	fileDef = open(filename, O_RDONLY);

	if (fileDef == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fileDef);
		return (-1);
	}

	rd = read(fileDef, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fileDef);
		return (-1);
	}

	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fileDef);

	return (wr);

}
