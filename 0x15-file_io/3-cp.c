#include "main.h"
/**
 * main - copy the content of file to another
 * @ac: number of arguments
 * @av: array of the arguments
 * Return: 0 if ok or -1 if fails
 */
int main(int ac, char *av[])
{
	int file_from, file_to, letteread, letterprints;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((letteread = read(file_from, buffer, 1024)) > 0)
	{
		letterprints = write(file_to, buffer, letteread);
		if (letterprints == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (letteread == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	else if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	else if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
