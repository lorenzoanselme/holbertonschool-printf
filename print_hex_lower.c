#include "main.h"

/**
 * print_hex_lower - prints unsigned int in lowercase hex
 * @args: arguments
 * @f: flags (# supported)
 *
 * Return: number printed
 */
int print_hex_lower(va_list args, flags_t *f)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (f->hash && n != 0)
	{
		_putchar('0');
		_putchar('x');
		count += 2;
	}

	count += print_unsigned_base(n, 16, "0123456789abcdef");

	return (count);
}
