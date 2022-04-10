#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file 
 * @letters: letters to be prints
 * Return: numbers of letters printed or -1 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buffer;
	ssize_t letteread, letterprint;

	if (!filename)
		return (0);

	fl = open(filename, O_RDWR);
	if (fl == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	letteread = read(fl, buffer, letters);
	if (letteread == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[letteread] = '\0';

	letterprint = write(STDOUT_FILENO, buffer, letteread);
	if (letterprint == -1)
	{
		free(buffer);
		return (0);
	}
	close(fl);
	free(buffer);
	return (letterprint);
}
