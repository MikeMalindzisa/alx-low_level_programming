#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* usage_error - Prints usage error message and exits with code 97
*/
void usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
* read_error - Prints read error message and exits with code 98
* @filename: file read
*/
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
* write_error -Prints write error message and exits with code 99
* @filename: file read
*/
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_error - Prints close error message and exits with code 100
 * @fd: file descriptor
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
* main - copies content of one file to another file
* @argc: number of arguments passed
* @argv: pointer to array of pointers to arguments
*
* Return: 0 on success, or appropriate error code
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len_read, len_write;
	char buffer[BUFFER_SIZE];

/* Check if arguments are correct */
	if (argc != 3)
		usage_error();

/* Open file to read from */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		read_error(argv[1]);

/* Open or create file to write to */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		write_error(argv[2]);

/* Copy content from file to file using buffer */
	while ((len_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		len_write = write(fd_to, buffer, len_read);
		if (len_write == -1)
			write_error(argv[2]);
		if (len_write != len_read)
			write_error(argv[2]);
	}

/* Check if any errors occurred during reading */
	if (len_read == -1)
		read_error(argv[1]);

/* Close both files */
	if (close(fd_from) == -1)
		close_error(fd_from);

	if (close(fd_to) == -1)
		close_error(fd_to);

	return (0);
}

