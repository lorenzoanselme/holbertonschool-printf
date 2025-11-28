#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary
 * @args: List of variadic arguments
 *
 * Return: Number of characters printed.
 */
int print_binary(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int mask = 1 << 31;
	int started = 0, count = 0;

	(void)f;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
			count++;
		}
		else if (started)
		{
			_putchar('0');
			count++;
		}
		mask >>= 1;
	}

	if (!count)
	{
		_putchar('0');
		return (1);
	}

	return (count);
}
