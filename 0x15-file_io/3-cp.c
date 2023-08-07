#include "main.h"

/**
 *main - copy file content to another file
 *@argc: arguments given
 *@argv: array of pointers to args
 *
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int frFile, toFile, rd, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = newBuffer(argv[2]);

	frFile = open(argv[1], O_RDONLY);

	rd = read(frFile, buff, 1024);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frFile == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wr = write(toFile, buff, rd);

		if (toFile == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		rd = read(frFile, buff, 1024);
		toFile = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	closeFile(frFile);
	closeFile(toFile);

	return (0);
}

/**
 *newBuffer - creates a buffer with 1024 bytes
 *
 *@nfile: file buffer is storing for
 *
 *
 *Return: pointer to buffer
 */
char *newBuffer(char *nfile)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nfile);
		exit(99);
	}

	return (buff);

}

/**
 *closeFile - close file descriptor
 *@fileDesc: descriptor to close
 *
 */

void closeFile(int fileDesc)
{
	int cls;

	cls = close(fileDesc);


	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Error: Can't close fd  %d\n", fileDesc);
		exit(100);
	}

}


