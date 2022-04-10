#include "main.h"
/**
 * append_text_to_file - add text to the end of file
 * @filename: file to will edit
 * @text_content: content to add
 * Return: 1 if ok or -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, tex;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);
	if (fl == -1)
		return (-1);

	if (text_content)
	{
		tex = write(fl, text_content, strlen(text_content));
		if (tex == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
