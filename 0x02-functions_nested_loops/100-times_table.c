
#include <stdio.h>

/**
 * print_times_table - prints the times table for numbers from 0 to 15
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j != 0)
				{
					putchar(',');
					putchar(' ');

					if (product < 100)
						putchar(' ');
					if (product < 10)
						putchar(' ');
				}

				if (product >= 100)
				{
					putchar((product / 100) + '0');
					putchar(((product / 10) % 10) + '0');
				}
				else if (product >= 10)
				{
					putchar((product / 10) + '0');
				}

				putchar((product % 10) + '0');
			}

			putchar('\n');
		}
	}
}
