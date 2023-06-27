
#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, returns the character written as an unsigned char cast to an int.
 *         On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (_putchar(c));
}

/**
 * print_rev - Prints a string in reverse order followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse order */
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
