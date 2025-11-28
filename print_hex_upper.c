#include "main.h"

/**
 * print_hex_upper - prints unsigned int in uppercase hex
 * @args: arguments
 * @f: flags (# supported)
 *
 * Return: number printed
 */
int print_hex_upper(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (f->hash && n != 0)
	{
		_putchar('0');
		_putchar('X');
		count += 2;
	}

	count += print_unsigned_base(n, 16, "0123456789ABCDEF");

	return (count);
}
