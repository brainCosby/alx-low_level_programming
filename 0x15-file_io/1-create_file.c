#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success and -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_ptr;
	int num_letters;
	int bytesWritten;

	if (!filename)
		return (-1);

	file_ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_ptr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	bytesWritten = write(file_ptr, text_content, num_letters);
	if (bytesWritten == -1)
		return (-1);

	close(file_ptr);

	return (1);
}
