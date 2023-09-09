#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists
 * -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_ptr;
	int num_letters;
	int bytesWritten;

	if (!filename)
		return (-1);

	file_ptr = open(filename, O_WRONLY | O_APPEND);
	if (file_ptr == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		bytesWritten = write(file_ptr, text_content, num_letters);
		if (bytesWritten == -1)
			return (-1);
	}

	close(file_ptr);

	return (1);
}
