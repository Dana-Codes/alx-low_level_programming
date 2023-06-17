#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Include the necessary header for the write function

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 54);
	return (1);
}
