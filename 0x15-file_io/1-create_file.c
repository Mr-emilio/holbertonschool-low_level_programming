#include "main.h"
/**
 * create_file - create a file
 * @filename: file name
 * @text_content: content fo text
 * Return: 1 fi ok or -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int fl, tex;

	if (!filename)
		return (-1);

	fl = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);

	if (text_content)
	{
		tex = write(fl, text_content, strlen(text_content));
		if (tex == -1)
			return (-1);
	}
	return (1);
}
