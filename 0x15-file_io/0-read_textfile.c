#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: type char filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0, if is NULL 0, if writes fail 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f = 0, rf = 0, wf = 0, cf;
	char *buffer;
	/*
	 *f: file
	 *rf: read file
	 *wf: write file
	 *cf: close file
	 */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	rf = read(f, buffer, letters);
	if (rf == -1)
		return (0);
	wf = write(STDOUT_FILENO, buffer, rf);
	if (wf == -1)
		return (0);
	cf = close(f);
	if (cf == -1)
		return (0);
	free(buffer);
	return (rf);
}
