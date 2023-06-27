
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The input string
 *
 * Return: The converted integer value
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Skip leading whitespace */
	while (s[i] == ' ')
		i++;

	/* Check for optional sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert the remaining digits */
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			break;

		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
