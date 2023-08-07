#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 * 
 * Description: This function reads a text file specified by @filename and
 * prints its content to the POSIX standard output (stdout). It will read up to
 * @letters bytes from the file.
 * 
 * Return: The actual number of letters read and printed, 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    ssize_t let, w;
    char *text;

    if (filename == NULL)
        return (0);

    text = malloc(letters);
    if (text == NULL)
        return (0);

    file = open(filename, O_RDONLY);
    if (file == -1)
    {
        free(text);
        return (0);
    }

    let = read(file, text, letters);
    if (let == -1)
    {
        free(text);
        close(file);
        return (0);
    }

    w = write(STDOUT_FILENO, text, let);

    free(text);
    close(file);

    return (w);
}
