#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, status, len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (access(filename, F_OK) == 0 ? 1 : -1);

	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
		return (-1);

	len = 0;
	while (text_content[len] != '\0')
		len++;

	status = write(file_descr, text_content, len);
	close(file_descr);

	return (status == len ? 1 : -1);
}

