#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_error - Print an error message to stderr and exit with the given code.
 * @code: The exit code to use.
 * @format: The format string for the error message.
 * @...: Additional arguments for the format string.
 */
void print_error(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(2, format, args);
	va_end(args);
	exit(code);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, or an appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n");

	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to file %s\n", file_to);

	buffer[1024];
	bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error(99, "Error: Can't write to file %s\n", file_to);
	}

	if (bytes_read == -1)
	print_error(98, "Error: Can't read from file %s\n", file_from);

	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
