#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The converted unsigned integer, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    unsigned int i;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);

        num = num << 1; // Shift left by one position
        if (b[i] == '1')
            num += 1; // Add 1 if the current bit is 1
    }

    return (num);
}
