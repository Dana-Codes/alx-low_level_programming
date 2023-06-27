
#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 *
 * Description: This function prints the second half of the input string,
 * followed by a new line. If the number of characters is odd, it prints the
 * last (length_of_the_string - 1) / 2 characters.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start = length % 2 == 0 ? length / 2 : (length - 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
