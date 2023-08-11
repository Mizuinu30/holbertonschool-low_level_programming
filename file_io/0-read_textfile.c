#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 *read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: number of letters to be read and printed.
 * Return: actual number of letters to be read and printed
 * if file cannot open return 0, if filename is NULL return 0
 * if write fails return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Fd, amount;
	char *txt = malloc(sizeof(char) * letters);

	if (txt == NULL || filename == NULL)
	{
		return (0);
	}

	Fd = open(filename, O_RDONLY);
	if (Fd == -1)
	{
		return (0);
	}

	amount = read(Fd, txt, letters);
	txt[letters + 1] = '\0';

	write(STDOUT_FILENO, txt, amount);

	free(txt);
	close(Fd);
	return (amount);
}
