#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed
 * return 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (!filename)
		return (0);

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	bytesRead = fread(buffer, 1, letters, file_ptr);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	fclose(file_ptr);

	return (bytesWritten);
}
