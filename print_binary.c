#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int mask = 1 << 31;
	int started = 0;
	int count = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			count++;
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
			count++;
		}

		mask >>= 1;
	}

	if (count == 0)
	{
		_putchar('0');
		count = 1;
	}

	return (count);
}
